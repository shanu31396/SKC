//CONSTANTS, MANIPULATORS AND OPERATOR PRECEDENCE
#include<iostream>
#include<iomanip> // this is a manipulator | manipulator is used to make our program view better by formatting the text
using namespace std;
int main(){
    // constant in C++
    const int a = 5;
    cout<<"Value of a is :"<<a<<endl;
    //a = 6; this line will throw an error as it has already been declared that the given variable is of constant type

    //manipulators in C++ (use of iomanip named header file here)
    int b = 3, c = 94, d = 345;
    cout<<"The value of b is : "<<setw(3)<<b<<endl;
    cout<<"The value of c is : "<<setw(3)<<c<<endl;
    cout<<"The value of d is : "<<setw(3)<<d<<endl<<endl;   
     
    cout<<"The value of b without setw is : "<<b<<endl;
    cout<<"The value of c without setw is : "<<c<<endl;
    cout<<"The value of d without setw is : "<<d<<endl<<endl;
    
    //operator precedence in C++
    int x = 3, y = 4;
    c = ((((a*5)+b)-45)+78);
    // this will be solved according to operator precedence which has been given on the website
    //https://en.cppreference.com/w/cpp/language/operator_precedence
    // short trick: MDRAS for Multiply >> Divide >> Remainder >> Addition >> Subtraction
    cout<<c<<endl;

     return 0;
}