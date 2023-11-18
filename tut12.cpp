// POINTERS IN C++
#include<iostream>
using namespace std;
int main(){;
    // what is pointer?
    // a simple answer to this question is 
    // it is datatype whih holds the ADDRESS of other datatypes

    int a=3;
    int* b = &a;

    // & ---> (Address of)<<operator
    cout<<"The address of a is "<<b<<" ."<<endl;
    cout<<"The address of a is "<<&a<<" ."<<endl;
        
    // * --->(Value at)Dereference operator
            // if we put * b/f pointer variable, it tells the value stored in that pointer variable
    cout<<"The value at address b is "<<*b<<" ."<<endl;
    
    return 0;
}  
 
// kisi variable se pehle "&" laga dein to us variable ka 
// addres mil jata h jise hum pointer k andar store kar sakte hain
 
// pointer sirf address store karte hain

// pointer ke pehle * lagaane se us address ki value mil jati h

