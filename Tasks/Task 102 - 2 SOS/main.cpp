#include "mbed.h"
#include "uop_msb.h"
using namespace uop_msb;

DigitalOut redLED(TRAF_RED1_PIN);
#define WAIT_TIME_MS 500

// main() runs in its own thread in the OS
int main()
{
    while (true) 
    {
        // turn led for 1 second
      redLED = 1;



    }
}

