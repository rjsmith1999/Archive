/* CAN communications example

  Topic: Receive Messages using read(ID, length, data) function
  Authors: Pedro Cevallos & Neil McNeight
  Created: 05/07/14
  Updated: 06/14/15

  Example shows how to receive messages using CAN
  This example uses Serial Monitor to display received messages

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

// Define our CAN speed (bitrate).
#define bitrate CAN_BPS_33333

void setup()
{
  Serial.begin(115200);  // Initialize Serial communications with computer to use serial monitor

  CAN.begin(bitrate);

  delay(4000);  // Delay added just so we can have time to open up Serial Monitor and CAN bus monitor. It can be removed later...

  // Output will be formatted as a CSV file, for capture and analysis
  Serial.println(F("millis(),ID,Length,Data0,Data1,Data2,Data3,Data4,Data5,Data6,Data7"));
}

// Finally arduino loop to execute above function with a 50ms? delay
void loop()
{
  filterMessage();
  delay(5);
}
