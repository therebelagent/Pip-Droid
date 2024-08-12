//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef IPIPSetup_h
#define IPIPSetup_h

#include <Arduino.h>
#include "PIPRGBLEDSetup.h"

class IPIPSetup
{
public:
    IPIPSetup() {};
    virtual PIPRGBLEDSetup getRowAPIPRGBLEDSetup() = 0;
    virtual PIPRGBLEDSetup getRowBPIPRGBLEDSetup() = 0;
    virtual uint8_t geTriEyeLEDPin() = 0;
    virtual uint8_t getResetSwitchPin() = 0;
};

#endif