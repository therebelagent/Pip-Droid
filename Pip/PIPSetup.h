//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef PIPSetup_h
#define PIPSetup_h

#include "IPIPSetup.h"
#include "PIPRGBLEDSetup.h"

static const uint8_t ROW_A_RED_RGBLED_PIN = 2;
static const uint8_t ROW_A_BLUE_RGBLED_PIN = 3;
static const uint8_t ROW_A_GREEN_RGBLED_PIN = 4;
static const bool ROW_A_COMMON_CATHODE = false;
static const uint8_t ROW_B_RED_RGBLED_PIN = 5;
static const uint8_t ROW_B_BLUE_RGBLED_PIN = 6;
static const uint8_t ROW_B_GREEN_RGBLED_PIN = 7;
static const bool ROW_B_COMMON_CATHODE = false;
static const uint8_t TRI_EYE_LED_PIN = 8;
static const uint8_t RESET_SWITCH_PIN = 9;

class PIPSetup : public IPIPSetup
{
public:
    PIPSetup();
    PIPRGBLEDSetup getRowAPIPRGBLEDSetup();
    PIPRGBLEDSetup getRowBPIPRGBLEDSetup();
    uint8_t geTriEyeLEDPin();
    uint8_t getResetSwitchPin();

protected:
    PIPRGBLEDSetup *_rowAPIPRGBLEDSetup;
    PIPRGBLEDSetup *_rowBPIPRGBLEDSetup;
};

#endif