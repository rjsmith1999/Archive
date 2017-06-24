class CANMsg {
  private:
    uint32_t id;
    unsigned char _len;
    unsigned char _data[15];
    bool rtr; //Remote request
    bool ext; //Extended Frame

  public:
    CANMsg() {};

    void readMessage() {
      CAN.readMsgBufID(&id, &_len, _data);    // read data,  len: data length, buf: data buf
      rtr = CAN.isRemoteRequest();
      ext = CAN.isExtendedFrame();
    }

    uint32_t getId() {
      return id;
    }

    unsigned char len() {
      return _len;
    }

    unsigned char *data() {
      return _data;
    }

    bool isRemoteRequest() {
      return rtr;
    }

    bool isExtendedFrame() {
      return ext;
    }

    bool isZero() {
      if (_len == 0) {
        return true;
      }

      for (int i = 0; i < _len; i++) {
        if (_data[i] != 0) {
          //nonzero
          return false;
        }
      }
      return true;
    }

    void print() {
      printT(id);
      printT(_len, false);

      printT(ext, "ext");
      printT(rtr, "rtr");

      Serial.print("\t");

      for (int i = 0; i < _len; i++) {
        printT(_data[i]);
      }

      Serial.println();
    }

    void printT(bool data, const String & label) {
      Serial.print(data ? label : ""); Serial.print("\t");
    }

    template<typename T>
    void printT(T data, bool hex = true) {
      Serial.print(data, hex? HEX: DEC); Serial.print("\t");
    }
};

