#include "mbed.h"
#define WAIT_TIME_MS 1000 


// DigitalOut redLED(PC_2,1);
// DigitalOut yellowLED(PC_3,1);
// DigitalOut greenLED(PC_6,1);

//BusOut lights(PC_2, PC_3, PC_6);
BusOut lights(PC_2, PC_3, PC_6, PB_0, PB_7, PB_14);

int main()
{
    //All OFF
    lights = 0b111111;

    //1,2,3 plus first table completed 
    

    while (true)
    {
        int count = 63;  //starts from 7     //task 4 completed 
        while (count >=0)  //counts to 0
        {
            printf("count = %d\n", count);
            lights = count;
            wait_us(250000);

            count = count - 1;  //substracting 1 at a time 
        }
    }
} //task finished