/*          3 things to be discussed 

1- Value initiallization:



2- Direct initiallization:
    Take care when initallization with direct init. to ZERO , that the compiler will give you warning that it's like prototype of function
    for example ( int x2(); ) it seems like a prototype , so warning maybe shown or not (dependant on the compiler)
    the best practice is assign the zero between the brakets like this int x2(0);




    contain concepts like static casting , new , lampda expression ,,

    used for some cases , not important but needed sometimes  
3- Copy initiallization:





*/


#include<stdio.h>
#include<iostream>



int main()
{

    int x0;                 //default -- this known like c it maybe init with zero or garbage, compiler dependant
    int x1{1};              //value  this will give you warning if you assign a float value for example 
    int x2(2);              //direct this will implicit cast the assigned type to the initiallized type and will not warn you
    int x3 = 3 ;            //Copy --- as C language ,, also will implicit casting like the direct initiallization
    return 0;
}



/************************************************************************
*
*
*
This Topic need to be revisioned after knowing the constructor and destructor concepts
*
*
*
*               VERY IMPORTANT.
*
**************************************************************/