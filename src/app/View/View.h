#ifndef VIEW_H
#define VIEW_H

#pragma once
#include <string>
#include "Led.h"
#include <wiringPi.h>

enum{LIGHT_OFF, LIGHT_ON};

class View
{
    
private:
    int lightState;
    Led *light;

public:
    View(Led *led);
    virtual ~View();
    void UpdateState(std::string strState);
    void LightView();
    void LightOn();
    void LightOff();
};

#endif