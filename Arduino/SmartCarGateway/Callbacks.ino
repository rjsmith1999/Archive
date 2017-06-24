void disconnectionCallBack(const Gap::DisconnectionCallbackParams_t *params)
{
  Serial.println("Disconnected ");
  Serial.println("Restart advertising ");
  ble.gap().startAdvertising();
}

// Called when data is written by connected pref
void writtenHandle(const GattWriteCallbackParams *Handler)
{
  Serial.print("Write Handle : ");
  if (Handler->handle == lock_state.getValueHandle())
  {
    uint8_t buf[lock_state.LEN];
    ble.gattServer().read(lock_state.getValueHandle(), buf, NULL);

    if (buf[0] == lock_state_locked) {
      lockController.setState(lockSwitchStateLock);

      ticker.attach(&resetLock, LOCK_OPEN_INTERVAL);

      Serial.println("Locked");
    } else if (buf[0] == lock_state_unlocked) {
      lockController.setState(lockSwitchStateUnlock);
      
      ticker.attach(&unlockAgainPre, LOCK_OPEN_INTERVAL);

      Serial.println("Unlocked");
    } else if (buf[0] == 11) {
      startDFU();
    } else {
      lockController.setState(lockSwitchStateCancel);

      Serial.println("Lock Off");
      ticker.detach();
    }
  }
  else if (Handler->handle == window_state.getValueHandle())
  {
    uint8_t buf[window_state.LEN];
    ble.gattServer().read(window_state.getValueHandle(), buf, NULL);

    if (buf[0] == window_state_open) {
      windowController.setState(relaySwitchStateFirst);

      windowTicker.attach(&resetWindow, WINDOW_OPEN_INTERVAL);

      Serial.println("UP");
    } else if (buf[0] == window_state_close) {
      windowController.setState(relaySwitchStateSecond);

      windowTicker.attach(&resetWindow, WINDOW_OPEN_INTERVAL);

      Serial.println("DOWN");
    } else {
      windowController.setState(relaySwitchStateOff);

      Serial.println("Window Off");

      windowTicker.detach();
    }
  }
}
