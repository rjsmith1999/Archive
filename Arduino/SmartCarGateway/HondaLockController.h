#include <elapsedMillis.h>

typedef enum {
  lockSwitchStateCancel = 0,
  lockSwitchStateLock    = 1,
  lockSwitchStateUnlock  = 2
} LockSwitchState;

class HondaLockController {

    //this variable represents the time a relay has been held open (i.e. in lock or unlock)
    elapsedMillis _timeOpen; //declare global if you don't want it reset every time loop runs

    int _firstOverridePin;
    int _secondOverridePin;

    int _lockPin;
    int _unlockPin;

    LockSwitchState _state = lockSwitchStateCancel;

  public:
    HondaLockController(int firstOverridePin, int secondOverridePin, int lockPin, int unlockPin) :
      _firstOverridePin(firstOverridePin), _secondOverridePin(secondOverridePin),
      _lockPin(lockPin), _unlockPin(unlockPin)
    {
      pinMode(_firstOverridePin, OUTPUT);
      pinMode(_secondOverridePin, OUTPUT);

    }

    void setState(LockSwitchState state) {
      overrideLockSensor(state);
      updateRelaysToState(state);
      _timeOpen = 0; // reset time open
    }

    void unlockAgain() {
      updateRelaysToState(lockSwitchStateUnlock);
    }

    void unlockAgainPre() {
      updateRelaysToState(lockSwitchStateCancel);
    }
    LockSwitchState getState() {
      return _state;
    }

    elapsedMillis getTimeOpen() {
      return _timeOpen;
    }

  protected:

    // This method overrides cars lock position sensor to make it think it has been locked or unlocked
    // lockState unknown will cancel override
    void overrideLockSensor(LockSwitchState toState) {
      if (toState == lockSwitchStateCancel) {
        // cancel override
        digitalWrite(_firstOverridePin, LOW);
        digitalWrite(_secondOverridePin, LOW);
      } else {
        // override sensor
        digitalWrite(_firstOverridePin, HIGH);
        digitalWrite(_secondOverridePin, HIGH);
      }
    }

    void updateRelaysToState(LockSwitchState state) {
      switch (state) {
        case lockSwitchStateCancel:
          digitalWrite(_lockPin, LOW);
          digitalWrite(_unlockPin, LOW);
          break;
        case lockSwitchStateLock:
          digitalWrite(_lockPin, HIGH);
          digitalWrite(_unlockPin, LOW);
          break;
        case lockSwitchStateUnlock:
          digitalWrite(_lockPin, LOW);
          digitalWrite(_unlockPin, HIGH);
          break;
      }
      //      Serial.print("State");
      //      Serial.println(state);
      _state = state; // update current state to always reflect RelayState
    }

};

