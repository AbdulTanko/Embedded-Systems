#include "mbed.h"

// main() runs in its own thread in the OS
DigitalOut redLED(PC_2);
DigitalOut greenLED(PC_6);
DigitalOut yellowLED(PC_3);

int main()
{
    while (true) {
        redLED = 1; //red led on
        wait_us(10000000);

        yellowLED = 1;
        wait_us(10000000);

        redLED = 0;
        yellowLED = 0;
        wait_us(10000000);

        greenLED = 1;
        wait_us(10000000);

        greenLED = 0;
        wait_us(10000000);

        int n = 0;

        while (n<4)
        {
            n= n+1;
            yellowLED = 1;
            wait_us(10000000);

            yellowLED = 0;
            wait_us(10000000);

        }

    




    }
}

