//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef PIPRGBLED_h
#define PIPRGBLED_h

#include "RGBLED.h"
#include "LED.h"

class PIPRGBLED : public RGBLED
{
public:
    PIPRGBLED(uint8_t redPin, uint8_t greenPin, uint8_t bluePin, bool commonCathode);
    void cyanTurnOn();
    void whiteTurnOn();
    void redTurnOn();
};

#endif