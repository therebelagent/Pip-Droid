//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef IPIPRGBLEDSetup_h
#define IPIPRGBLEDSetup_h

#include <Arduino.h>

class IPIPRGBLEDSetup
{
public:
    IPIPRGBLEDSetup() {};
    virtual uint8_t getRedRGBLEDPin() = 0;
    virtual uint8_t getBlueRGBLEDPin() = 0;
    virtual uint8_t getGreenRGBLEDPin() = 0;
    virtual bool getRGBLEDCommonCathode() = 0;
};

#endif