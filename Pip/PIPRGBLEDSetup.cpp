//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#include "PIPRGBLEDSetup.h"

PIPRGBLEDSetup::PIPRGBLEDSetup(uint8_t redRGBLEDPin, uint8_t blueRGBLEDPin, uint8_t greenRGBLEDPin, bool rgbLEDCommonCathode)
{
    _redRGBLEDPin = redRGBLEDPin;
    _blueRGBLEDPin = blueRGBLEDPin;
    _greenRGBLEDPin = greenRGBLEDPin;
    _rgbLEDCommonCathode = rgbLEDCommonCathode;
}

uint8_t PIPRGBLEDSetup::getRedRGBLEDPin() { return _redRGBLEDPin; }

uint8_t PIPRGBLEDSetup::getBlueRGBLEDPin() { return _blueRGBLEDPin; }

uint8_t PIPRGBLEDSetup::getGreenRGBLEDPin() { return _greenRGBLEDPin; }

bool PIPRGBLEDSetup::getRGBLEDCommonCathode() { return _rgbLEDCommonCathode; }