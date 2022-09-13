#include <iostream>
#include "Led.h"
#include "Listener.h"
#include "View.h"
#include <wiringPi.h>

using namespace std;

int main()
{
    cout << "hello world" << endl;
    Button button1(27);
    Led led1(25);
    View view(&led1);
    Controller control(&view);
    Listener listener(&button1, &control);

    while (1)
    {
        listener.CheckEvent();
        view.LightView();
        delay(50);
    }
    
    return 0;
}