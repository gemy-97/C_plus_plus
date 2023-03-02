#include<stdio.h>
#include<iostream>

/*example for ranged for loop and comparing with the normal for loop ,,

 the most differencies is in the assembly instructions 

 the ranged loop takes more assembly instructions than the normal for loop


 Maybe the ranged for loop used when you don't know what is the limitation you need ***

*/

#define ARRAY_MEMBERS 3

int main()
{


    int arr[ARRAY_MEMBERS]={1,2,3};
    for (int i = 0; i < ARRAY_MEMBERS ; i++)
    {
            std::cout << i << std::endl;                /*   The normal For-Loop   */
    }
    


    for(int i : arr )
    {
        std::cout << i << std::endl;                    /*    The Ranged For-Loop  */
    }
    

    return 0;

}