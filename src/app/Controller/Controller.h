#ifndef CONTROLLER_H
#define CONTROLLER_H

#pragma once
#include <iostream>
#include "Led.h"

enum{LIGHT_OFF, LIGHT_ON};

class Controller
{
private:
    int lightState;
    Led *light;

public:
    Controller(Led *led);
    virtual ~Controller();
    void updateEvent(std::string strBtn);
};

#endif