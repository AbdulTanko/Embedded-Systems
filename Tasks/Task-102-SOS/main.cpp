// You need this to use the Module Support Board
#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 
DigitalOut greenLED(TRAF_GRN1_PIN);
DigitalOut redLED(TRAF_RED1_PIN);
DigitalOut yellowLED(TRAF_YEL1_PIN);
DigitalOut redLED2 (TRAF_RED2_PIN);
DigitalOut greenLED2(TRAF_GRN2_PIN);
DigitalOut yellowLED2(TRAF_YEL2_PIN);


Buzzer buzz;
Buttons buttons;

// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)
volatile int x = 0;
int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    {
        x++;
        //On for 500ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 1000);  //250ms

        //Off for 500ms
        greenLED = 0;    

        // on for 500ms
        yellowLED = 1;
        buzz.playTone("D");
        wait_us(WAIT_TIME_MS * 1000);//250ms
        
        //off for 500ms
        yellowLED = 0;

        //On for 500ms
        redLED = 1;
        buzz.playTone("E");
        wait_us(WAIT_TIME_MS * 1000);  //250ms

        //Off for 500ms
        redLED = 0;

       
        //On for 500ms
        redLED2 = 1;
        buzz.playTone("F");
        wait_us(WAIT_TIME_MS * 1000);  //250ms

        //Off for 500ms
        redLED2 = 0;    



        // on for 500ms
        yellowLED2 = 1;
        buzz.playTone("F");
        wait_us(WAIT_TIME_MS * 1000);//250ms
        
        //off for 500ms
        yellowLED2 = 0;
        wait_us(WAIT_TIME_MS * 1000);  //250ms

        //On for 500ms
        greenLED2 = 1;
        buzz.playTone("G");
        wait_us(WAIT_TIME_MS * 1000);  //250ms

        //Off for 500ms
        greenLED2 = 0;       
        wait_us(WAIT_TIME_MS * 1000);  //250ms


    



        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS * 1000);        

    }
}