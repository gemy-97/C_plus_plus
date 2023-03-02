#include <stdio.h>
#include <iostream>
/*      This file to descripe the new features in function by C++ :
        1- Default Value :
        the main differencies that you can assign a default value can be defined with the prototype
        with the default value assigned with the prototype , you can overwrite it while calling the function
        the assignation of the default value happen once in the prototype , and cannot be repeated in the definition




        N.B : when you assign a default value to an argument , you must assign all the arguments followed by the first assigned argument
              for example. : if in function fun below you assigned x , you must assign Y also ,,, but you can assign y and not assign x
                as y is not followed by another arguments (i.e : it's the last argument in the function)



        ------------------------------------------------------------------------------------------------------------------

        2-Functions Overload : 
        Define two functions with the same name but taking different arguments regarding the type
        the function overload is for changing the type of arguments not the return variable 

*/
void fun(int x, int y = 3)
{
    std::cout << x << "   " << y << std::endl;              /*Practice for Default value*/
}

void fun1(int x, int y )
{
    std::cout << "int,int" << std::endl;                    /*Practice for function overload*/
}    


void fun1(int x, float y )
{
  std::cout << "int,float" << std::endl;                    /*Practice for function overload*/
}




int main()
{

    fun(2); /*  since the new feature in c++ ,
                you can assign the first argument only , as the second argument is assigned in the prototype
            */

    fun(2, 5); /*    you can overwrite what was assigned to the function in the prototype
                     by calling the second argument and giving another value
               */


/*
                                The above code practice for default value assignation in functions
            ---------------------------------------------------------------------------------------------------
                                The below code practice for function overload 


*/
    fun1(2,3);   // calling the function with int,int 
    fun1(2,3.5); // compiler error , not knowing which function to call , it can cast to int and call the first one and can call the second , error

    fun1 (2,3.5F); // calling the second function with int,float 




    return 0;
}