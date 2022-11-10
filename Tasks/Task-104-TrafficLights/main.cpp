#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 

DigitalOut red(TRAF_RED1_PIN,1);         //Note the initial state
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

LCD_16X2_DISPLAY lcd;

int main()
{
    while (true) {
    red = 1;
    wait_us(8000000);


    amber = 1;
    wait_us(2000000);

    red = 0;
    amber = 0;
    
    green = 1;
    wait_us(10000000);

    green = 0;
    
    int n = 0;
    while (n < 4 ) 
    {
        n = n +1;
        amber = 1;
        wait_us(500000);
        amber = 0;
        wait_us(500000);


    } 

    amber = 0;

    }
    



   
    
    






}
