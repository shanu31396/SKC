// INLINE FUNCTIONS, DEFAULT ARGUMENTS AND CONSTANT ARGUMENTS   

#include<iostream>
using namespace std;

//always keep in mind while making a function inline that 
// make only those function inline which takes very less line of codes 
// if we make a huge function inline, our cache memory will ran out of space
 
//  ADVANTAGE 
//  it reduces amount of time consumed in execution of code

//  DISADVANTAGE
//  it calls function in cache memory and if huge program enters in cache, it will start occupying too much space resulting in space shortage

//  inline int product(int a, int b){
//      return a*b;
//  }
 
 int product(int a, int b){
     static int c = 0;
    // here, what's happening in this function is that the value is retained
    // static int = 0 will execute only once and as program goes to second line
    // it returns value according to given stucture and add it in next line(return) 
    // then when product function is again called in 2nd line it will go to product function created above main
    // and here it will found that value of c is retained as executed in structure line, during execution of 
    // 1st line of main function and proceeds further, here, static int = 0 won't run in 2nd wave of coding  
    // with its current value

    // it's not a good practice to use inline function with static , loop statement , switch statement etc. as it'll be confusing
    // generally functions forgot their variables after execution but when variable is declared as static type 
    // then value stored in that variable is retained in the memory 
    // and fuction never forgets that value 
     c = c + 1;
     return a*b+c;

    // avoid making static datatypes under inline function
     }

    float moneyReceived(int current_money, float factor=1.04){  //  DEFAULT ARGUMENT
    return current_money * factor;
     }


    //  int strlen(const int,int a ){
    //    return  int+int a;
    //  }
int main(){ 
    int a,b,c;
     cout<<"Enter the value of a and b :";
     cin>>a>>b;
     cout<<"The product of a and b is :"<<product(a,b)<<endl;
     cout<<"The product of a and b is :"<<product(a,b)<<endl;

     cout<<"Enter the current money :"<<endl;
     cin>>c;
     cout<<"For General: The amount of money you will get after 1 year is "<<moneyReceived(c)<<endl;
     cout<<"Foe VIPs :   The amount of money you will get after 1 year is "<<moneyReceived(c,1.1); 
     return 0;
    }    

       // Now, discussing about default arguments

   /*
        In default arguments, the formal variable is taken into consideration even if 2nd actual variable is not given but
        one point to keep in mind is that 
        the default argument[formal] should must be placed later to compulsary argument[formal] 
        about which we have already been introduced in actual variable's function 

        generally, we don't assign values to formal variables by writing in its         function but in case of default argument,
        we assign a value to later variable which is known as default arguments and if this later function don't get value from
        actual variable, it throws its default value and if provided, then will work as normal function
   */
