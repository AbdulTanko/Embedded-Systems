#include "mbed.h"

PortOut lights(PortC, 0b0000000001001100);

int main()
{
    //All OFF
    lights = 0;

    while (true)
    {
        lights = 0b0000000000000100;    //redLED
        lights = 0b0000000000001000;    //yellowLED
        //redLED + yellowLED
        wait_us(1000000);
        lights = 0b0000000000001000;    //yellowLED
        lights = 0b0000000001000000;    //greenLED
        //yellowLED + RedLED
        wait_us(1000000); 
        lights = 0b0000000000000100; //redLED
        lights = 0b0000000001000000;    //greenLED
        wait_us(1000000);                
    }    //try to fix this to follow the tasks //its not working 
}