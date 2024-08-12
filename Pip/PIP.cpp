//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#include "PIP.h"

PIP::PIP(IPIPSetup &pipSetup)
{
    _PIPSetup = &pipSetup;
    _PIPEyeController = new PIPEyeController(*_PIPSetup);
    pinMode(_PIPSetup->getResetSwitchPin(), INPUT);
    runDiagnostic();
}

void PIP::runDiagnostic()
{
    _PIPEyeController->setOperationalMode(OperationalMode::Diagnostic);
    for (int counter = 1; counter <= 3; counter++)
    {
        _PIPEyeController->blink(250);
    }
    delay(1000);
}

void PIP::run()
{
    if (_PIPEyeController->getOperationalMode() != OperationalMode::Normal)
    {
        _PIPEyeController->setOperationalMode(OperationalMode::Normal);
        _PIPEyeController->turnOn();
    }
}

void PIP::factoryReset()
{
    if (_PIPEyeController->getOperationalMode() != OperationalMode::FactoryReset)
    {
        _PIPEyeController->setOperationalMode(OperationalMode::Normal);
        for (int counter = 1; counter <= 6; counter++)
        {
            _PIPEyeController->blink(75);
            delay(100);
        }
        delay(1500);
        _PIPEyeController->setOperationalMode(OperationalMode::FactoryReset);
        _PIPEyeController->turnOn();
    }
}

void PIP::update()
{
    int value = digitalRead(_PIPSetup->getResetSwitchPin());
    if (value == LOW)
    {
        factoryReset();
    }
    else
    {
        run();
    }
}