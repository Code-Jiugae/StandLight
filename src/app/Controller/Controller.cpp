#include "Controller.h"

Controller::Controller(View *viewer)
{
    view = viewer; //이름을 light로 하겠다.
    lightState = LIGHT_OFF;//초기화

}

Controller::~Controller()
{

}

 void Controller::updateEvent(std::string strBtn)
 {
    switch (lightState)
    {
    case LIGHT_OFF:
        if(strBtn == "powerButton"){
            lightState = LIGHT_ON;
            view->UpdateState("StateOn");
        }
        break;
    case LIGHT_ON:
        if(strBtn == "powerButton"){
            lightState = LIGHT_OFF;
            view->UpdateState("StateOff");
        }
         break;
    
    default:
        break;
    }
 }