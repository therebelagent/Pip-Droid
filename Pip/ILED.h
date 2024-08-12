//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef ILED_h
#define ILED_h

#include <Arduino.h>

class ILED
{
public:
    ILED(uint8_t pin) : _pin(pin) {}
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void write(int level) = 0;

protected:
    const uint8_t _pin;
};

#endif