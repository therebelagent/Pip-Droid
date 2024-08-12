//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef PIPEyeController_h
#define PIPEyeController_h

#include "PIPSetup.h"
#include "PIPRGBLED.h"

enum class OperationalMode
{
    Diagnostic = 0,
    Normal = 2,
    FactoryReset = 4,
};

class PIPEyeController
{
public:
    PIPEyeController(IPIPSetup &pipSetup);
    void setOperationalMode(OperationalMode operationalMode);
    OperationalMode getOperationalMode();
    void turnOn();
    void turnOff();
    void blink(int delayTime);

protected:
    OperationalMode _operationalMode;
    PIPRGBLED *_rowAPIPRGBLED;
    PIPRGBLED *_rowBPIPRGBLED;
    LED *_triEyeLED;
};

#endif