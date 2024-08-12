//
//  PIP firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.0.
//

#include "PIPSetup.h"
#include "PIP.h"

IPIPSetup *pipSetup;
PIP *pip;

void setup()
{
    pipSetup = new PIPSetup();
    pip = new PIP(*pipSetup);
}

void loop()
{
    pip->update();
}