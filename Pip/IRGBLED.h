//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef IRGBLED_h
#define IRGBLED_h

class IRGBLED
{
public:
    IRGBLED(uint8_t redPin, uint8_t greenPin, uint8_t bluePin, bool commonCathode){};
    virtual void redTurnOn() = 0;
    virtual void redTurnOff() = 0;
    virtual void greenTurnOn() = 0;
    virtual void greenTurnOff() = 0;
    virtual void blueTurnOn() = 0;
    virtual void blueTurnOff() = 0;
    virtual void turnOff() = 0;
};

#endif