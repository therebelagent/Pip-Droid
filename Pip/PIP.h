//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#ifndef PIP_h
#define PIP_h

#include "PIPSetup.h"
#include "PIPEyeController.h"

class PIP
{
public:
    PIP(IPIPSetup &PIPSetup);
    void runDiagnostic();
    void run();
    void factoryReset();
    void update();

protected:
    IPIPSetup *_PIPSetup;
    PIPEyeController *_PIPEyeController;
};

#endif