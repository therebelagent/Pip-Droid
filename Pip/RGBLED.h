//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef RGBLED_h
#define RGBLED_h

#include "IRGBLED.h"
#include "LED.h"

class RGBLED : public IRGBLED
{
public:
    RGBLED(uint8_t redPin, uint8_t greenPin, uint8_t bluePin, bool commonCathode);
    void redTurnOn();
    void redTurnOff();
    void greenTurnOn();
    void greenTurnOff();
    void blueTurnOn();
    void blueTurnOff();
    void turnOff();

protected:
    int _levelHIGH = HIGH;
    int _levelLOW = LOW;
    ILED *_redLED;
    ILED *_greenLED;
    ILED *_blueLED;
};

#endif