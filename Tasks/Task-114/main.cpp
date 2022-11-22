#include "mbed.h"

// main() runs in its own thread in the OS
DigitalOut redLED(PC_2);
DigitalOut greenLED(PC_6);
DigitalOut yellowLED(PC_3);

int main()
{
    while (true) 
    {
        redLED = 1; //red led on for 1 second 
        wait_us(2000000); 

        yellowLED = 1; // red and yellow for 1 second 
        wait_us(2000000);

        redLED = 0; // red led goes off
        yellowLED = 0; //yellow led goes off
        wait_us(2000000);

        greenLED = 1; // green led comes on for 1 second 
        wait_us(2000000);

        greenLED = 0; // green led goes off
        wait_us(2000000);

        int n = 0;

        while (n<4) //  while loop 4 times 
        {
            n= n+1;
            yellowLED = 1;
            wait_us(2000000);

            yellowLED = 0;
            wait_us(2000000);

        }

    


        //task completed

    }
}

