#ifndef LISTENER_H
#define LISTENER_H

#pragma once

#include <iostream>
#include "Button.h"
#include "Led.h"

class Listener
{
private:
    Button *powerButton;
    Led *light;
public:
    Listener(Button *button, Led *led);
    ~Listener();
    void CheckEvent();

};

#endif