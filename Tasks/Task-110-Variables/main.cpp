#include "uop_msb.h"
#include <cstdio>
using namespace uop_msb;

Buzzer buzz;

PortOut LED_PORTE(PortE, LED_MASK);

DigitalOut LED_BAR_OE(LED_BAR_OE_PIN,1);      //Off by default
DigitalOut LED_DIGIT_OE(LED_DIGIT_OE_PIN,1);   //Off by default

DigitalOut LED_D1_LE(LED_D1_LE_PIN,0);
DigitalOut LED_D2_LE(LED_D2_LE_PIN,0);
DigitalOut LED_RED_LE(LED_RED_LE_PIN,0);
DigitalOut LED_GRN_LE(LED_GRN_LE_PIN,0);
DigitalOut LED_BLUE_LE(LED_BLUE_LE_PIN,0);

DigitalIn BlueButton(USER_BUTTON);

BusOut ledData(LED_D0_PIN, LED_D1_PIN, LED_D2_PIN, LED_D3_PIN, LED_D4_PIN, LED_D5_PIN, LED_D6_PIN, LED_D7_PIN);


int main()
{
    printf("\nTASK-110\n");

    printf("\n18th November 2022\n"); // task 1 and 2; added a new line then run the code; done 
    

    // Integer
    int count = 30;
    printf("count = %d\n", count); // task 1 and2; printing variables; completed 

    // Add one to count
    count = count + 2;
    printf("New value of count = %d\n", count);

    char character;
    character = 65;
    printf("The character %c has the ASCII code %d\n", character, character);
     
    character = 'A';
    printf("The character %c has the ASCII code %d\n", character, character);

    character = 'Z';
    printf("The character %c has the ASCII code %d\n", character, character);

    character = 'a';
    printf("The character %c has the ASCII code %d\n", character, character);

    character = 'z';
    printf("The character %c has the ASCII code %d\n", character, character );
    
    character = '0';
    printf("The character %c has the ASCII code %d\n", character, character );
    
    character = '9';
    printf("The character %c has the ASCII code %d\n", character, character ); //ASCII characters and char; 1,2,3 completed 
    




    // Short
    //unsigned short shortCount = 32767; // Integers task 1,2,3,4,5 completed 
    int shortCount = 32767; // task 6 and 7 completed 
    printf("The value of shortCount is %hd\n", shortCount);
    shortCount = shortCount + 2;
    printf("add 1 and shortCount is %hd\n", shortCount);

    // Long long
    long long NN = 0x12345678ABCD0001LL; //Literal in HEX
    printf("A very large number %d\n", NN);
    printf("A very large number in hex %llX\n", NN); // integers tasks completed 

    // unsigned
    short p = 1; //16 bit
    printf("unsigned int p = %d\n", p);
    p = p - 2;
    printf("Subtract 2. Now unsigned int p = %u\n", p);  //unsigned types task 1,2,3,4 completed 

    // float 
    float pi_float = 3.1415926536;
    printf("The value of pi is approximately %.10f\n", pi_float);

    // double
    double pi_double = 3.1415926536l;
    printf("The value of pi is approximately %.20lf\n", pi_double);

    // Data type sizes (in bytes)
    printf("Size of a char is %d bytes\n", sizeof(char));
    printf("Size of a short is %d bytes\n", sizeof(short));
    printf("Size of a int is %d bytes\n", sizeof(int));
    printf("Size of a long is %d bytes\n", sizeof(long));
    printf("Size of a long long is %d bytes\n", sizeof(long long));
    printf("Size of a float is %d bytes\n", sizeof(float));
    printf("Size of a double is %d bytes\n", sizeof(double));

    //completed task 110

    // Stop
    while (true);   
}