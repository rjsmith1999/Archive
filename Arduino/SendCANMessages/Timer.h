
class TimeCounter {
  private:
    const long _interval;
    unsigned long previousMillis = 0;
     
  public:
    TimeCounter(const long interval) : _interval(interval) {}

    bool hasFired() {
      return millis() - previousMillis >= _interval;
    }

    void reset() {
      previousMillis = millis();
    }
};

