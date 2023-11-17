//FOR,  WHILE AND DO-WHILE LOOPS IN C++
#include<iostream>
using namespace std;
int main(){
    /*There are 3 types of loops in C++ :
        1. For Loop
        2. While Loop
        3. Do-while loop
        */
    
     // FOR LOOP IN C++

     //  Syntax for for loop

    //   for(initialization; condition; updation)
    //{
    //   loop body (C++ code);
    //}

    /*the working of this code is somehow like this


        --->> at first, "initialization" will initiate the code i.e. i=0, this happens only once and will never run again 


        --->>then, it will go to next part of "for" loop which is "condition" and check for whether condition is true or false,
         if false, then code will stop executing, 
         if true, then code will execute cout command


        --->>then, it will goes in "updation" part and just after updation executes,
         the initial value which was 0 here will got updated and everything will be repeated */


         for (int i = 0; i < 4; i++)
    {                   // THIS
        cout<<i<<endl;  //     IS
                        //       LOOP BODY
    }
    
    return 0;
}