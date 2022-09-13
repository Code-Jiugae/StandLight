#include "View.h"

View::View(Led *led)
{
    light = led;
    lightState = LIGHT_OFF;
}

View::~View()
{

}

void View::UpdateState(std::string strState)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if(strState == "StateOn")
        {
            lightState = LIGHT_ON;
        }
        break;
    
    case LIGHT_ON:
        if(strState == "StateOff")
        {
            lightState = LIGHT_OFF;
        }
        break;
    
    default:
        break;
    }
}

void View::LightView()
{
    switch (lightState)
    {
    case LIGHT_OFF:
        LightOff();
        break;
    
    case LIGHT_ON:
        LightOn();
        break;
    
    default:
        break;
    }
}

// void View::LightOn()
// {
//     light->On();
// }

void View::LightOn()
{
    static unsigned int prevTime = 0;
    if(millis() - prevTime < 300) return;
    prevTime = millis();
    light->Toggle();
}


void View::LightOff()
{
    light->Off();
}