// demo: CAN-BUS Shield, receive data with check mode
// send data coming to fast, such as less than 10ms, you can use this way
// loovee, 2014-6-13

#include <SPI_Master.h>
#include "mcp_can.h"

// the cs pin of the version after v1.1 is default to D9
// v0.9b and v1.0 is default D10
const int SPI_CS_PIN = 9;

MCP_CAN CAN(SPI_CS_PIN);                                    // Set CS pin

#include "CANmsg.h"

void setup()
{
  Serial.begin(115200);
  SPI_Master.setFrequency(SPI_8M);

  // init can
  uint8_t res;
  while (CAN_OK != (res = CAN.begin(CAN_33KBPS)))              // init can bus : baudrate = 33.3k
  {
    Serial.print("CAN BUS Shield init fail: ");
    Serial.println(res);
    Serial.println(" Init CAN BUS Shield again");
    delay(100);
  }
  Serial.println("CAN BUS Shield init ok!");
}

CANMsg msg;

void loop()
{
  if (CAN_MSGAVAIL == CAN.checkReceive())           // check if data coming
  {
    msg.readMessage();

    if (msg.isZero()) {
      return;
    }
    msg.print();
  }
}
  /*********************************************************************************************************
    END FILE
  *********************************************************************************************************/
