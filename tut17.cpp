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

// inline int product(int a, int b){
//     return a*b;
// }

int product(int a, int b){
    static int c = 0;
    // here, what's happening in this function is that the value is retained
    // sttic int = 0 will execute once and as program goes to second line
    // it returns value according to given stucture and add it in the line of main function 
    // then when product function is again called in 2nd line it will go to product function created above main
    // and here it will found that value of c is retained as executed in structure line during execution of 
    //1st line of main function and proceed further 
    // with it,s current value

    // its not a good practice to use inline function with static , loop statement , switch statement etc. as it'll be confusing
    // generally functions forgot their variables after execution but when variable is declared as static type 
    // then value stored in that variable is retained in the memory 
    // and fuction never forgets that value 
    c = c + 1;
    return a*b+c;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b :";
    cin>>a>>b;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    return 0;
}