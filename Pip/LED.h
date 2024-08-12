//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef LED_h
#define LED_h

#include "ILED.h"

class LED : public ILED
{
public:
    LED(uint8_t pin);
    void turnOn();
    void turnOff();
    void write(int level);
};

#endif