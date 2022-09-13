#include "Listener.h"

Listener::Listener(Button *button, Led *led)
{
    powerButton = button;
    light = led;
}
Listener::~Listener()
{

}

void Listener::CheckEvent()
{
    if(powerButton->getState() == RELEASE_ACTIVE)
    {
        light->Toggle();
    }
}