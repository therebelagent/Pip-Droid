//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef PIPRGBLEDSetup_h
#define PIPRGBLEDSetup_h

#include <Arduino.h>
#include "IPIPRGBLEDSetup.h"

class PIPRGBLEDSetup : public IPIPRGBLEDSetup
{
public:
    PIPRGBLEDSetup(uint8_t redRGBLEDPin, uint8_t blueRGBLEDPin, uint8_t greenRGBLEDPin, bool rgbLEDCommonCathode);
    uint8_t getRedRGBLEDPin();
    uint8_t getBlueRGBLEDPin();
    uint8_t getGreenRGBLEDPin();
    bool getRGBLEDCommonCathode();

protected:
    uint8_t _redRGBLEDPin;
    uint8_t _blueRGBLEDPin;
    uint8_t _greenRGBLEDPin;
    bool _rgbLEDCommonCathode;
};
#endif