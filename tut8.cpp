//CONSTANTS, MANIPULATORS AND OPERATOR PRECEDENCE
#include<iostream>
#include<iomanip> // this is a manipulator
using namespace std;
int main(){
    // constant in C++
    const int a = 5;
    cout<<"Value of a is :"<<a<<endl;
    //a = 6; this line will throw an error as the declared variable is constant;

    //manipulators in C++
    int b = 3, c = 94, d = 345;
    cout<<"The value of b is : "<<setw(3)<<b<<endl;
    cout<<"The value of c is : "<<setw(3)<<c<<endl;
    cout<<"The value of d is : "<<setw(3)<<d<<endl<<endl;   
     
    cout<<"The value of b without setw is : "<<b<<endl;
    cout<<"The value of c without setw is : "<<c<<endl;
    cout<<"The value of d without setw is : "<<d<<endl<<endl;
    
    //operator precedence in C++
    int x = 3, y = 4;
    int c = ((((a*5)+b)-45)+78);
    // this will be solved according to operator precedence which has been given on the website
    //https://en.cppreference.com/w/cpp/language/operator_precedence
    // short trick MDRAS for multiply >> divide >> remainder >> addition >> subtraction
    cout<<c<<endl;

     return 0;
}