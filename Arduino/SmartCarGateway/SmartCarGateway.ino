#include <BLE_API.h>
#include <DFUService.h>
BLE ble;

DFUService *dfu;

#define GAP ble.gap()

typedef enum {
  lock_state_unknown = 0,
  lock_state_locked = 1,
  lock_state_unlocked = 2
} lock_state_t;

typedef enum {
  window_state_stopped = 0,
  window_state_open = 1,
  window_state_close = 2
} window_state_t;

#include "GATTWrap.h"
#include "RelaySwitch.h"
#include "HondaLockController.h"

static const uint8_t lock_state_uuid[] = {0x61, 0x21, 0x29, 0x4f, 0x51, 0x71, 0x4f, 0x3d, 0xbd, 0x46, 0x43, 0xad, 0xaa, 0xdd, 0xa7, 0x5c};
GATTCharacteristicWrap lock_state(lock_state_unknown, lock_state_uuid, GattCharacteristic::BLE_GATT_CHAR_PROPERTIES_WRITE | GattCharacteristic::BLE_GATT_CHAR_PROPERTIES_READ | GattCharacteristic::BLE_GATT_CHAR_PROPERTIES_NOTIFY);

// 79EFB0FA-484F-4202-8C5F-A90EC8FD6605
static const uint8_t window_state_uuid[] = {0x79, 0xEF, 0xB0, 0xFA, 0x48, 0x4F, 0x42, 0x02, 0x8C, 0x5F, 0xA9, 0x0E, 0xC8, 0xFD, 0x66, 0x05};
GATTCharacteristicWrap window_state(window_state_stopped, window_state_uuid, GattCharacteristic::BLE_GATT_CHAR_PROPERTIES_WRITE | GattCharacteristic::BLE_GATT_CHAR_PROPERTIES_READ | GattCharacteristic::BLE_GATT_CHAR_PROPERTIES_NOTIFY);

// -- Create Service
GattCharacteristic *chars[] = {&lock_state.getChar(), &window_state.getChar()};
static const uint8_t car_service_uuid[] = {0xa1, 0xa4, 0xc2, 0x56, 0x33, 0x70, 0x4d, 0x9a, 0x99, 0xaa, 0x70, 0xbf, 0xa8, 0x1b, 0x90, 0x6b};
static const uint8_t car_service_uuid_rev[] = {0x6b, 0x90, 0x1b, 0xa8, 0xbf, 0x70, 0xaa, 0x99, 0x9a, 0x4d, 0x70, 0x33, 0x56, 0xc2, 0xa4, 0xa1};
GattService         service(car_service_uuid, chars, sizeof(chars) / sizeof(GattCharacteristic *));

RelaySwitch windowController(6, 7);
#define WINDOW_OPEN_INTERVAL .25 //250 / 1000
Ticker windowTicker;

// LOCKCONTROLER
HondaLockController lockController(4, 5, 6, 7);
#define LOCK_OPEN_INTERVAL .25 //500 
Ticker ticker;

void resetLock() {
  lockController.setState(lockSwitchStateCancel);

  ticker.detach();
}

void unlockAgain() {
  lockController.unlockAgain();

  ticker.attach(&resetLock, LOCK_OPEN_INTERVAL);
}

void unlockAgainPre() {
  lockController.unlockAgainPre();

  ticker.attach(&unlockAgain, LOCK_OPEN_INTERVAL / 3);
}

// LOCKCONTROLER

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(13, OUTPUT);

  Serial.println("Start ");
  ble.init();
  ble.gap().onDisconnection(disconnectionCallBack);
  ble.gattServer().onDataWritten(writtenHandle);

  setupAdvertisingData();

  // add service
  ble.gattServer().addService(service);
  // set device name
  GAP.setDeviceName((const uint8_t *)"Smart Car Gateway");
  // set tx power,valid values are -40, -20, -16, -12, -8, -4, 0, 4
  GAP.setTxPower(4);

  // get BLE stack version
  Serial.println( ble.getVersion() );
  // start advertising
  GAP.startAdvertising();

  Serial.println("start advertising ");
}

void resetWindow() {
  windowController.setState(relaySwitchStateOff);

  window_state.setValue(window_state_stopped);

  windowTicker.detach();
}

void loop() {
  // put your main code here, to run repeatedly:
  //  lockController.check();

  ble.waitForEvent();
}
