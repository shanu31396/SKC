//FOR,  WHILE AND DO-WHILE LOOPS IN C++
#include<iostream>
using namespace std;
int main(){
    /*There are 3 types of loops in C++ :
        1. For Loop
        2. While Loop
        3. Do-while loop
        */
    
     // 1.FOR LOOP IN C++

     //  Syntax for for loop

    //   for(initialization; condition; updation)
    //{
    //   loop body (C++ code);
    //}

    /*the working of this code is somehow like this


        --->> at first, "initialization" will initiate the code i.e. i=0, this happens only once and will never run again 


        --->>then, it will go to next part of "for" loop which is "condition" and check for whether condition is true or false,
         if false, then code will stop executing, 
         if true, then loop code will execute cout command


        --->>then, it will goes in "updation" part and just after updation executes,
         the initial value which was 0 here, will got updated and everything will be repeated till condition is true*/



          for (int i = 0; i < 4; i++)
     {                   // THIS
         cout<<i<<endl;  //     IS
    //                     //       LOOP BODY
     }
    
    cout<<endl;
       // we can also create infinite loop by inserting a condition which never get fasle like 0<4;
    
    // 2. WHILE LOOP IN C++

    
// here, at first, we set the value of our declared variable
// program will simply go in next line and will check whether condition under "while" is true or false
// if false, it will exit 
// if true, it will execute the program
// then goes to "updation" and repeats from "while" by checking condition 

    int j = 6;
    while (j<=10)
    {
        cout<<j<<endl;
        j++;
    }

    cout<<endl;
    // we can also create infinite while loop by inserting a condition which never get fasle
    

    //3. DO-WHILE LOOP IN C++
    int k = 1;
    do{
        cout<<k<<endl;
        k++;
    }while(k<5);

    /*
        it's mechanism is just reciprocal to while loop because in while loop, condition is given first then comes the command to print that 
         code 
         but
         here, first, what to do is explained then given the condition
         
         ONE THING TO KEEP IN MIND HERE IS THAT 
         IN THIS DO-WHILE LOOP CASE,THE CODE WILL DEFINITELY RUN ONE TIME IRRESPECTIVE OF WHATEVER BE THE CONDITION IS then it will check
         the condition and if it found false,code stops, but if found true, loop will execute normally */
    
     return 0;
}