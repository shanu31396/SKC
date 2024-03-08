// POINTERS IN C++
#include<iostream>
using namespace std;
int main(){
    // what is pointer?
    // it is datatype that holds the ADDRESS of other datatypes

    int a=3;
    int* b ;    // int *b=&a;
    b = &a;
    *b=4;

    // & ---> (Address of) operator
    cout<<"The address of a is "<<b<<" ."<<endl;
    cout<<"The address of a is "<<&a<<" ."<<endl;
        
    // * --->(Value at)Dereference operator
            // if we put * b/f pointer variable, it tells the value of the variable whose address is stored in that pointer variable
    
    // all these lines print the value of variable a
    cout<<"The value at address b is "<<*&a<<" ."<<endl;
    cout<<"The value at address b is "<<a<<" ."<<endl;

    cout<<"The value at address b is "<<*b<<" ."<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is :"<<&b<<endl;
    cout<<"The address of b is :"<<c<<endl;
    cout<<"The value at address c is :"<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is :"<<**c<<endl;
    //  *c =  b  ,    using pointer with c will be redirected to b
    // **c = *b  ,    b gives an output, then using pointer with b will gives a value of address stored in it, which is the value of a
    return 0;
}  