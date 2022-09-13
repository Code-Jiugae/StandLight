#include <iostream>
#include "Led.h"
#include "Listener.h"
#include <wiringPi.h>

using namespace std;

int main()
{
    cout << "hello world" << endl;
    Button button1(27);
    Led led1(25);
    Controller control(&led1);
    Listener listener(&button1, &control);

    while (1)
    {
        listener.CheckEvent();
        delay(50);
    }
    
    return 0;
}