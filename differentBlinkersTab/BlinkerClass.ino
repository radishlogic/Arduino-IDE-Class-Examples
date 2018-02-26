/*
 * Created and maintained by RadishLogic.com
 */

/*
 * BLINKER CLASS DECLARATION
 */
class Blinker {
  private:
    byte pinLED;

    boolean ledState = LOW;

    unsigned long timeLedOn;
    unsigned long timeLedOff;

    unsigned long nextChangeTime = 0;

  public:
    Blinker(byte pinLED, unsigned long timeLedOn, unsigned long timeLedOff) {
      this->pinLED = pinLED;
      this->timeLedOn = timeLedOn;
      this->timeLedOff = timeLedOff;

      pinMode(pinLED, OUTPUT);
    }

    // Checks whether it is time to turn on or off the LED.
    void check() {
      unsigned long currentTime = millis();

      if(currentTime >= nextChangeTime) {

        if(ledState) {
          // LED is currently turned On. Turn Off LED.
          ledState = LOW;
          nextChangeTime = currentTime + timeLedOff;
        }
        else{
          // LED is currently turned Off. Turn On LED.
          ledState = HIGH;
          nextChangeTime = currentTime + timeLedOn;
        }

        digitalWrite(pinLED, ledState);
      }
    }
};
