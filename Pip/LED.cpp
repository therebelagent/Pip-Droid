//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#include "LED.h"

LED::LED(uint8_t pin) : ILED(pin)
{
    pinMode(_pin, OUTPUT);
}

void LED::turnOn() { digitalWrite(_pin, HIGH); }

void LED::turnOff() { digitalWrite(_pin, LOW); }

void LED::write(int level) { digitalWrite(_pin, level); }