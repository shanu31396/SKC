// Declaration of Header File
#include <iostream>
//#include <bits/stdc++.h> //Ultimate header file

using namespace std; // Namespace to avoid name conflicts

// Class is created b/f main() function
class Train{ 
    private:
    int a, b, c; //privately declared variables
    public:
    int d, e; //publicly declared variables
    
    // Creating function to store value in variables
    // as can't be given externally
    void caller(int a1, int b1, int c1){
        a = a1;
        b = b1;
        c = c1;
    }
    // Declaring a function inside "Train" class to
    // print the values
    void printer(){
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"The value of c is : "<<c<<endl;
    cout<<"The value of d is : "<<d<<endl;
    cout<<"The value of e is : "<<e<<endl;
    }
    
};
    // main() function
int main() {
    //Creation of object
    Train test; // Object created
// Assigning values to publicly declared variables 
    test.d = 4;
    test.e = 5;
// Assigning values to privately declared variables
// using functions as can't be given externally as
// given to publicly specified variables
    test.caller(1,2,3);
    
// Calling another function created inside class to
// print the assigned values
    test.printer();
    
    
// Return statement for successful execution of code
    return 0;
}