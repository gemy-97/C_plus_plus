/*
bool new type defining TRUE & FALSE 
why wchar_t ?? ,, because there is arabic letters it's size more than 1 byte i.e(2bytes or 4 bytes)
so wchar_t is introduced to handle this case
which equalize in c is to define a new type using typedef unsigned short or unsigned long  
*/


#include <stdio.h>
#include <iostream>

// typedef unsigned char bool;
// #define TRUE 1
// #define FALSE 0

int main()
{

    bool x = true;
    bool x1 = false;
    bool x2 = 1;
    bool x3 = 5;
    bool x4 = -1;
    bool x5 = 0;



    std::cout << std::boolalpha << x << std::endl;  


    // until here was a small practice on using bool type ,, the next lines for practicing the Wchar_t type 


   wchar_t  z  = 'ء' ;

    std::cout << sizeof(z) <<std::endl << z << std::endl; 

    return 0;      
}