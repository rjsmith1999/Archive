/* CAN communications example

  Topic: Send messages using write() function
  Authors: Pedro Cevallos & Neil McNeight
  Created: 05/07/14
  Updated: 06/14/15

  Example shows how to send messages using CAN
  This example uses Serial Monitor to display received messages.

  As per wiki information:
  "CAN bus is a message-based protocol, designed specifically for automotive
  applications but now also used in other areas such as aerospace, maritime,
  industrial automation and medical equipment."

  For more info http://en.wikipedia.org/wiki/Controller_area_network

 */

#include <SPI_Master.h>
#define SPI SPI_Master
#include "CAN.h"

#include "MessageHelpers.h"
#include "Timer.h"

// Define our CAN speed (bitrate).
#define bitrate CAN_BPS_33333

// data counter just to show a dynamic change in data messages
uint32_t extended_counter = 0;

void setup()
{
  Serial.begin(115200); // Initialize Serial communications with computer to use serial monitor

  CAN.begin(bitrate);

  delay(4000); // Delay added just so we can have time to open up Serial Monitor and CAN bus monitor. It can be removed later...

  // Output will be formatted as a CSV file, for capture and analysis
  Serial.println(F("millis(),ID,Length,Data0,Data1,Data2,Data3,Data4,Data5,Data6,Data7"));
  
  delay(4000);
}

// Create a function to load and send an extended frame message
void extendedMessage()
{
  CAN_Frame extended_message; // Create message object to use CAN message structure

  // There are at least two ways to put data into the message; memcpy() and individual arrays
  uint8_t message_data[8] = { 0 };

  extended_message.id = 0x02DACBF1; // Random Extended Message ID
  extended_message.valid = true;
  extended_message.rtr = 0;
  extended_message.extended = CAN_EXTENDED_FRAME;
  extended_message.length = 8; // Data length

  // counter in the first 4 bytes, timing in the last 4 bytes
  uint32_t timehack = millis();

  // Load the data into a local array and then use memcpy() to transfer to CAN_Frame
  message_data[0] = (extended_counter >> 24);
  message_data[1] = (extended_counter >> 16);
  message_data[2] = (extended_counter >> 8);
  message_data[3] = (extended_counter & 0xF);
  message_data[4] = (timehack >> 24);
  message_data[5] = (timehack >> 16);
  message_data[6] = (timehack >> 8);
  message_data[7] = (timehack & 0xF);
  memcpy(extended_message.data, message_data, sizeof(extended_message.data));

  CAN.write(extended_message); // Load message and send
  extended_counter++; // increase count
}

void lockMessage()
{
  CAN_Frame lockMessage; // Create message object to use CAN message structure

  lockMessage.id = 0xEF81430; // Lock Message ID
  lockMessage.valid = true;
  lockMessage.rtr = 0;
  lockMessage.extended = CAN_EXTENDED_FRAME;
  lockMessage.length = 1; // Data length
  
  CAN.write(lockMessage); // Load message and send
  printMessage(lockMessage);
}

// level-> 0=off 1=park 2=headlight
int lightMessage2(int level)
{
  CAN_Frame lightMessage; // Create message object to use CAN message structure

  lightMessage.id = 0x0AF81111; // Light Message ID
  lightMessage.valid = true;
  lightMessage.rtr = 0;
  lightMessage.extended = CAN_EXTENDED_FRAME;
  lightMessage.length = 2; // Data length

  switch (level) {
    case 0:
      lightMessage.data[0] = 0x00;
      lightMessage.data[1] = 0x00;
      break;
    case 1:
      lightMessage.data[0] = 0x40;
      lightMessage.data[1] = 0x40;
      break;
    case 2:
      lightMessage.data[0] = 0x42;
      lightMessage.data[0] = 0x40;
      break;
  }
  
  CAN.write(lightMessage); // Load message and send

//  printMessage(lightMessage);
}

int lightMessage(int level)
{
  CAN_Frame lightMessage; // Create message object to use CAN message structure

  lightMessage.id = 0xAF87070; // Light Message ID
  lightMessage.valid = true;
  lightMessage.rtr = 0;
  lightMessage.extended = CAN_EXTENDED_FRAME;
  lightMessage.length = 2; // Data length

  switch (level) {
    case 0:
      lightMessage.data[0] = 0x00;
      lightMessage.data[1] = 0x00;
      break;
    case 1:
      lightMessage.data[0] = 0x40;
      lightMessage.data[1] = 0x00;
      break;
    case 2:
      lightMessage.data[0] = 0x50;
      lightMessage.data[0] = 0x00;
      break;
  }
  
  CAN.write(lightMessage); // Load message and send

//  printMessage(lightMessage);
}

TimeCounter sendTimer(100);
int currentState = 1;

void loop()
{
  //filterMessage();

  lightMessage(currentState);  

  delay(5);
}
