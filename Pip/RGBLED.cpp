//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#include <Arduino.h>
#include "RGBLED.h"

RGBLED::RGBLED(uint8_t redPin, uint8_t greenPin, uint8_t bluePin, bool commonCathode) : IRGBLED(redPin, greenPin, bluePin, commonCathode)
{
    if (!commonCathode)
    {
        _levelHIGH = LOW;
        _levelLOW = HIGH;
    }
    _redLED = new LED(redPin);
    _greenLED = new LED(greenPin);
    _blueLED = new LED(bluePin);
    turnOff();
}

void RGBLED::redTurnOn() { _redLED->write(_levelHIGH); }

void RGBLED::redTurnOff() { _redLED->write(_levelLOW); }

void RGBLED::greenTurnOn() { _greenLED->write(_levelHIGH); }

void RGBLED::greenTurnOff() { _greenLED->write(_levelLOW); }

void RGBLED::blueTurnOn() { _blueLED->write(_levelHIGH); }

void RGBLED::blueTurnOff() { _blueLED->write(_levelLOW); }

void RGBLED::turnOff()
{
    _redLED->write(_levelLOW);
    _greenLED->write(_levelLOW);
    _blueLED->write(_levelLOW);
}