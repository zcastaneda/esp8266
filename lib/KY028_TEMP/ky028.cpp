
#include "Arduino.h"
#include "ky028.h"

KY028::KY028(int DIGITAL_PIN, int ANALOG_PIN){
    _DIGITAL_PIN = DIGITAL_PIN;
    _ANALOG_PIN = ANALOG_PIN;
// Set DIGITAL_PIN to INPUT
pinMode(_DIGITAL_PIN, INPUT);

}

double KY028::get_temp(){
    double analog_input = analogRead(_ANALOG_PIN);
    Serial.println(analog_input);

    return analog_input;
}
