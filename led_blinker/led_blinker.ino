/*
  LED BLINKING USING ARDUINO UNO

  This mini project makes an led blink on an Arduino Nano R3

  Tutorial by Sushma Shri: https://www.youtube.com/@sushmasri7238
  Tutorial link: https://youtu.be/tOZvSSKP0ek
  This example code is in the public domain.
*/


int led = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);
}
