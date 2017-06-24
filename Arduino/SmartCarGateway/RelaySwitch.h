#include <elapsedMillis.h>

typedef enum {
  relaySwitchStateOff = 0,
  relaySwitchStateFirst = 1,
  relaySwitchStateSecond = 2
} RelaySwitchState;

class RelaySwitch {

    //this variable represents the time a relay has been held open (i.e. in lock or unlock)
    elapsedMillis _timeOpen; //declare global if you don't want it reset every time loop runs

    int _firstPin;
    int _secondPin;

    RelaySwitchState _state = relaySwitchStateOff;

  public:
    RelaySwitch(int firstPin, int secondPin) : _firstPin(firstPin), _secondPin(secondPin) {
      pinMode(_firstPin, OUTPUT);
      pinMode(_secondPin, OUTPUT);

    }

    void setState(RelaySwitchState state) {
      updateRelaysToState(state);
      _timeOpen = 0; // reset time open
    }

    RelaySwitchState getState() {
      return _state;
    }

    elapsedMillis getTimeOpen() {
      return _timeOpen;
    }

  protected:

    void updateRelaysToState(RelaySwitchState state) {
      switch (state) {
        case relaySwitchStateOff:
          digitalWrite(_firstPin, LOW);
          digitalWrite(_secondPin, LOW);
          break;
        case relaySwitchStateFirst:
          digitalWrite(_firstPin, HIGH);
          digitalWrite(_secondPin, LOW);
          break;
        case relaySwitchStateSecond:
          digitalWrite(_firstPin, LOW);
          digitalWrite(_secondPin, HIGH);
          break;
      }
      //      Serial.print("State");
      //      Serial.println(state);
      _state = state; // update current state to always reflect RelayState
    }
};

