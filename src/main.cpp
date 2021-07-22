#include <Arduino.h>

void setup() {
  pinMode(3,OUTPUT);
  pinMode(11,OUTPUT);

  TCCR2A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);//Fast PWM
  TCCR2B = _BV(CS22); // clk/64

  OCR2A = 180; //pin 11 duty cycle = 16MHz / 64(TCCR2B) / 256 * (180 + 1)% = 70.7%
  OCR2B = 50; // pin 3  dyty cycle = 16MHz / 64(TCCR2B) / 256 * ( 50 + 1)% = 19.9%
}

void loop() {
  // put your main code here, to run repeatedly:
}