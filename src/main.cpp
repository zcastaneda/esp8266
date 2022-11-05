#include <Arduino.h>
#include "ky028.h"

int DIG_PIN = 0;
int ANALOG_PIN = A0;
double t;
// char TEMP_PIN = D0;
// const int TEMP_PIN = 5;
KY028 temp_1(DIG_PIN,ANALOG_PIN);

void setup() {
  // put your setup code here, to run once:

  // pinMode(DIG_PIN, INPUT);
  // digitalWrite(TEMP_PIN, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  t = temp_1.get_temp();
  // Serial.println(digitalRead(DIG_PIN));
  // Serial.println(analogRead(ANALOG_PIN));
  delay(100);
}