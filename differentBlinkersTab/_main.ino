/*
 * Created and maintained by RadishLogic.com
 */

Blinker blink1 = Blinker(PIN_LED1, 500, 500);
Blinker blink2 = Blinker(PIN_LED2, 1000, 1000);
Blinker blink3 = Blinker(PIN_LED3, 2000, 2000);
Blinker blink4 = Blinker(PIN_LED4, 1000, 2000);

void setup() {
  
}

void loop() {
  blink1.check();
  blink2.check();
  blink3.check();
  blink4.check();
}
