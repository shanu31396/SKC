//HEADER FILES AND OPERATORS IN C++

//Header file is of two types-

// i) System header files
//#include<iostream> // this is syntax of system header file

// ii) User-defined header files
#include<bits/stdc++.h>
//#include"this.h"// this header file needs to be defined in directory by the programmer as compiler don't know about it
using namespace std;
int main(){
    cout<<"Operators in C++\n";
    /*Now, we'll discuss operators in C++ 
    but b/f this, remember a shortcut to create multi-cursor which is created by pressing alt+shift 
    and then drag mouse cursor upto dezired line. 
    Now, coming to the topic, there are following types of operators in C++ 

    ------------Arithmetic Operators------------
    + add
    - sub
    * multi
    / divide
    % modulo----it displays remainder
    ++ increment operator
    -- decrement operator*/
    int a = 5, b = 4;
    cout<<"The value of a+b is :"<<(a+b)<<endl; //9
    cout<<"The value of a-b is :"<<(a-b)<<endl; //1
    cout<<"The value of a*b is :"<<(a*b)<<endl; //20
    cout<<"The value of a/b is :"<<(a/b)<<endl; //1
    cout<<"The value of a%b is :"<<(a%b)<<endl; //1
    cout<<"The value of a++ is :"<<(a++)<<endl; //5
    cout<<"The value of a-- is :"<<(a--)<<endl; //6
    cout<<"The value of ++a is :"<<(++a)<<endl; //6
    cout<<"The value of --a is :"<<(--a)<<endl; //5
    cout<<endl;

    /*------------Assignment Operators------------
    =   this is assignment operator, which is used to assign values to variables*/

    /*------------Comparison Operators------------
    == exactly equals to
    != not equals to
    > greater than
    >= greater than equals to
    < less than
    <= less than equals to*/
    cout<<"The value of a == b is:"<<(a == b)<<endl;
    cout<<"The value of a != b is:"<<(a != b)<<endl;
    cout<<"The value of a > b is:"<<(a > b)<<endl;
    cout<<"The value of a >= b is:"<<(a >= b)<<endl;
    cout<<"The value of a <= b is:"<<(a < b)<<endl;
    cout<<"The value of a < b is:"<<(a <= b)<<endl;
    cout<<endl;
    /*------------Logical Operators------------
    && logical AND operator. Here, both or all given condition needs to be true
    || logical OR operator. Here, any one condition out of given condition needs to be true
    ! logiacl NOT operator. It just reverses the result which will come. Syntax:  (!(a==b)||(a<b)) */

    cout<<"The value of ((a == b) && (a>b)) is:"<<((a == b) && (a>b))<<endl;
    cout<<"The value of ((a == b) || (a>b)) is:"<<((a == b) || (a>b))<<endl;
    cout<<"The value of (!(a > b)) is:"<<(!(a > b))<<endl;

    /*------------Bitwise Operators------------
    it first converts decimal into binary and preform bitwise operation which we will study later*/
    
    
     return 0;
}