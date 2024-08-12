//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#include "PIPEyeController.h"

PIPEyeController::PIPEyeController(IPIPSetup &pipSetup)
{
    _rowAPIPRGBLED = new PIPRGBLED(pipSetup.getRowAPIPRGBLEDSetup().getRedRGBLEDPin(), pipSetup.getRowAPIPRGBLEDSetup().getBlueRGBLEDPin(), pipSetup.getRowAPIPRGBLEDSetup().getGreenRGBLEDPin(), pipSetup.getRowAPIPRGBLEDSetup().getRGBLEDCommonCathode());
    _rowBPIPRGBLED = new PIPRGBLED(pipSetup.getRowBPIPRGBLEDSetup().getRedRGBLEDPin(), pipSetup.getRowBPIPRGBLEDSetup().getBlueRGBLEDPin(), pipSetup.getRowBPIPRGBLEDSetup().getGreenRGBLEDPin(), pipSetup.getRowBPIPRGBLEDSetup().getRGBLEDCommonCathode());
    _triEyeLED = new LED(pipSetup.geTriEyeLEDPin());
}

void PIPEyeController::setOperationalMode(OperationalMode operationalMode) { _operationalMode = operationalMode; }

OperationalMode PIPEyeController::getOperationalMode() { return _operationalMode; }

void PIPEyeController::turnOn()
{
    _triEyeLED->turnOff();
    switch (_operationalMode)
    {
    case OperationalMode::Diagnostic:
        _rowAPIPRGBLED->cyanTurnOn();
        _rowBPIPRGBLED->cyanTurnOn();
        break;
    case OperationalMode::Normal:
        _rowAPIPRGBLED->whiteTurnOn();
        _rowBPIPRGBLED->whiteTurnOn();
        break;
    case OperationalMode::FactoryReset:
        _rowAPIPRGBLED->redTurnOn();
        _rowBPIPRGBLED->redTurnOn();
        break;
    }
}

void PIPEyeController::turnOff()
{
    _rowAPIPRGBLED->turnOff();
    _rowBPIPRGBLED->turnOff();
    _triEyeLED->turnOn();
}

void PIPEyeController::blink(int delayTime)
{
    turnOn();
    delay(delayTime);
    turnOff();
    delay(delayTime);
}