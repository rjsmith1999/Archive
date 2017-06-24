class GATTCharacteristicWrap {
  public:
    const uint8_t LEN;
  private:
    uint8_t value;
    GattCharacteristic gattChar;
  public:
    GATTCharacteristicWrap(uint8_t init_value, const uint8_t *uuid, uint8_t props, uint8_t len = 1) :
      LEN(len),
      value(init_value),
      gattChar((UUID)uuid, &value, LEN, LEN, props)
    {

    }

    GattAttribute::Handle_t getValueHandle() {
      return gattChar.getValueAttribute().getHandle();
    }

    uint8_t getValue() {
      return value;
    }

    GattCharacteristic& getChar() {
      return gattChar;
    }

    void setValue(uint8_t newVal) {
      value = newVal;
      ble.gattServer().write(getValueHandle(), &value, LEN);
    }
};

