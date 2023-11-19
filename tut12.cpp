// POINTERS IN C++
#include<iostream>
using namespace std;
int main(){;
    // what is pointer?
    // a simple answer to this question is 
    // it is datatype whih holds the ADDRESS of other datatypes

    int a=3;
    int* b = &a;

    // & ---> (Address of) operator
    cout<<"The address of a is "<<b<<" ."<<endl;
    cout<<"The address of a is "<<&a<<" ."<<endl;
        
    // * --->(Value at)Dereference operator
            // if we put * b/f pointer variable, it tells the value stored in that pointer variable
    
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
    //  *c =  b  ,c pe pointer(*) lagane se b pr pahucha
    // **c = *b  ,b par pahuch k ek value diya, ab b pr pointer(*)
    // se uskey andar stored address ka value mila jo ki a ka value tha
    return 0;
}  
 
// kisi VARIABLE SE PEHLE "&" laga dein to us variable ka 
// addres mil jata h jise hum pointer k andar store kar sakte hain
 
// pointer sirf address store karte hain

// POINTER SE PEHLE "*" lagaane se uske andar stored address ki value mil jati h