
// Create a function to read message and display it through Serial Monitor
void printMessage(CAN_Frame message)
{
  Serial.print(millis());
  Serial.print(F(",0x"));
  Serial.print(message.id, HEX); //display message ID
  Serial.print(',');
//  Serial.print(message.extended ? "Extended" : ""); // Displays extended
//  Serial.print(',');
//  Serial.print(message.rtr ? "RTR" : ""); // Displays rtr
//  Serial.print(',');
  if (message.rtr == 1)
  {
    Serial.print(F(" REMOTE REQUEST MESSAGE ")); //technically if its RTR frame/message it will not have data So display this
  }
  else
  {
    Serial.print(message.length, HEX); //display message length
    for (byte i = 0; i < message.length; i++)
    {
      Serial.print(',');
      if (message.data[i] < 0x10) // If the data is less than 10 hex it will assign a zero to the front as leading zeros are ignored...
      {
        Serial.print('0');
      }
      Serial.print(message.data[i], HEX); //display data based on length
    }
  }
  Serial.println(); // adds a line
}

// Create a function to read message and display it through Serial Monitor
void readMessage()
{
  CAN_Frame message; // Create message object to use CAN message structure

  if (CAN.available() == true) // Check to see if a valid message has been received.
  {
    message = CAN.read(); //read message, it will follow the CAN structure of ID,RTR, legnth, data. Allows both Extended or Standard

    printMessage(message);
  }
}

void filterMessage() {

  if (CAN.available() == true) // Check to see if a valid message has been received.
  {
    CAN_Frame message = CAN.read();

    long id = message.id;

//    if (id == 0x1610FF10 || id == 0x1610FF11 || id == 0x1610FF70) {
//    if (id == 0xAF87070 || id == 0xAF81111) {
//    if (id == 0x1E12FF30 || id == 0x1E12FF10 || id == 0x1211FF10 || id == 0x1E12FF50) {
    if (id == 0x12F81010 || id == 0x12F83130) {
      printMessage(message);
//    }
  }
}

