//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#include "PIPSetup.h"

PIPSetup::PIPSetup()
{
    _rowAPIPRGBLEDSetup = new PIPRGBLEDSetup(ROW_A_RED_RGBLED_PIN, ROW_A_BLUE_RGBLED_PIN, ROW_A_GREEN_RGBLED_PIN, ROW_A_COMMON_CATHODE);
    _rowBPIPRGBLEDSetup = new PIPRGBLEDSetup(ROW_B_RED_RGBLED_PIN, ROW_B_BLUE_RGBLED_PIN, ROW_B_GREEN_RGBLED_PIN, ROW_B_COMMON_CATHODE);
}

PIPRGBLEDSetup PIPSetup::getRowAPIPRGBLEDSetup() { return *_rowAPIPRGBLEDSetup; }

PIPRGBLEDSetup PIPSetup::getRowBPIPRGBLEDSetup() { return *_rowBPIPRGBLEDSetup; }

uint8_t PIPSetup::geTriEyeLEDPin() { return TRI_EYE_LED_PIN; }

uint8_t PIPSetup::getResetSwitchPin() { return RESET_SWITCH_PIN; }