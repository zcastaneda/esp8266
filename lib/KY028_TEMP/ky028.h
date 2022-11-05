#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class KY028{
    public:
        KY028(int DIGITAL_PIN, int ANALOG_PIN);
        double get_temp();
    private:
        int _DIGITAL_PIN;
        int _ANALOG_PIN;
};
#endif