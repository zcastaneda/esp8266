#include <Arduino.h>


#define LED 2
const int analogInPin = A0;
const int sensor_value = 0;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(analogInPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(digitalRead(HB_100));
  Serial.println("test_value");
  Serial.println(analogRead(analogInPin));
  Serial.println("   ");
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}