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
    
        //First dot 
        greenLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(150000);  //150ms
        
        //Space after first dot 
        greenLED = 0; // greenled turned off
        buzz.rest(); // buzzer shuts off 

        //Second dot 
        wait_us(150000); // symbol space 
        greenLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(150000);  //150ms

        //Space after second dot 
        greenLED = 0; // greenled turned off
        buzz.rest(); // buzzer shuts off 

        //Third dot 
        wait_us(150000); // symbol space 
        greenLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(150000);  //150ms
        
        //Space after third dot 
        greenLED = 0; // greenled turned off
        buzz.rest(); // buzzer shuts off 

        wait_us(450000); // Letter space 

        //Letter (O) dash 
        // First dash 
        yellowLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(450000);  //150ms

        yellowLED = 0; // greenled turned off
        buzz.rest();
         
        wait_us(150000); 

        //second dash letter(0)
        yellowLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(450000);  //150ms

        yellowLED = 0; // greenled turned off
        buzz.rest();
        
        wait_us(150000); 
        
        //Third dash letter(0)
        yellowLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(450000);  //150ms

        yellowLED = 0; // greenled turned off
        buzz.rest();
       
        wait_us(450000); // space between O and the last S

        //Last 
        greenLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(150000);  //150ms
        
        //Space after first dot 
        greenLED = 0; // greenled turned off
        buzz.rest(); // buzzer shuts off 

        //Second dot 
        wait_us(150000); // symbol space 
        greenLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(150000);  //150ms

        //Space after second dot 
        greenLED = 0; // greenled turned off
        buzz.rest(); // buzzer shuts off 

        //Third dot 
        wait_us(150000); // symbol space 
        greenLED = 1;  // greenLED turns on 
        buzz.playTone("C"); // plays major scale C 
        wait_us(150000);  //150ms




        














        

        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS * 1000);        

    }
}