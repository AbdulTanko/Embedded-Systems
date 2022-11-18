#include "uop_msb.h"
#include <cstdio>
using namespace uop_msb;

Buzzer buzz;

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);


int main()
{
    printf("\nTASK-112\n");

    //getchar
    char c1, c2;
    printf("\n\nPress a key\n");
    c1 = getchar();
    printf("You entered character %c which has the ASCII code %d\n", c1, c1);

    printf("\n\nPress another key\n");
    c2 = getchar();
    printf("You entered character %c which has the ASCII code %d\n", c2, c2);
    
    //task 1; *= 42 ,%= 37, £=194, and space key= 32. 

    //scanf
    printf("\n\nTo set the delay (in ms), type in an integer number and press return\n");
    int on_time;
    int off_time;
    int parsed = scanf("%d %d", &on_time, &off_time); // 2 place holder as there are 2 values (on_time and off_time)
    
    
    printf("You entered %d correct integer values. The value was %dms\n", parsed, on_time); 


    
    
    // Stop
    while (parsed > 0) {
        wait_us(on_time * 1000);
        led1 = 1;
        led2 = 1;
        led3 = 1;
        wait_us(off_time * 1000);
        led1 = 0;
        led2 = 0;
        led3 = 0;        
    } 

    printf("Invalid - please restart and try again\n");
    while(1);    
    // task 112 finished 
}