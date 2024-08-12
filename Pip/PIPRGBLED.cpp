//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#include <Arduino.h>
#include "PIPRGBLED.h"

PIPRGBLED::PIPRGBLED(uint8_t redPin, uint8_t greenPin, uint8_t bluePin, bool commonCathode) : RGBLED(redPin, greenPin, bluePin, commonCathode) {}

void PIPRGBLED::cyanTurnOn()
{
    RGBLED::blueTurnOn();
    RGBLED::greenTurnOn();
    RGBLED::redTurnOff();
}

void PIPRGBLED::whiteTurnOn()
{
    RGBLED::blueTurnOn();
    RGBLED::greenTurnOn();
    RGBLED::redTurnOn();
}

void PIPRGBLED::redTurnOn()
{
    RGBLED::redTurnOn();
    RGBLED::blueTurnOff();
    RGBLED::greenTurnOff();
}