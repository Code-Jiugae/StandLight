#include "Listener.h"

Listener::Listener(Button *button, Controller *control)
{
    powerButton = button;
    controller = control;
}
Listener::~Listener()
{

}

void Listener::CheckEvent()
{
    if(powerButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("powerButton");
    }
}