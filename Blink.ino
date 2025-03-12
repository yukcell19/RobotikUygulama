/*
  İGÜ MYO Robotik 1. Led Yak ve Söndür Uygulaması
  Ekip İsmi:
  ...

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
int led_pin = 13;
void setup() {
  pinMode(led_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
                        //5V
  digitalWrite(led_pin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
                        //0V
  digitalWrite(led_pin, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
}
