//VARIABLE SCOPE AND DATATYPE

// Variable is just a container to store data. 
//RULE TO DECLARE VARIABLES IN C++
    /*
    variable name can range from 1 to 255 characters
    all variable names must begin with a letter or underscore(_)
    after first initial letter, variable name can contain letetr and numbers
    these are case sensitive
    no special characters is allowed
    C++ keyword can't be used as variable's name
    */
   
// It is of two types---------
#include<iostream>
using namespace std;

// i) Global variable
    int a = 4;

    //1st function
    void sum(){
        int d = 5;
        cout<<"The value of d is : "<<d<<" ."<<endl;
    }

    //2nd function
    int func_1(){
        cout<<"The value of global a is : "<<::a<<" ."<<endl;
        return 0;
    }

    //3rd function
    void func_2(){
        bool e = true;
        cout<<"If you are learning than 1 will be printed : "<<e<<" ."<<endl;
    }
    
    int main(){
    //  ii) Local variable
// yes, global and local vaiable can have same name
    int a = 1, b = 2;
    float c = 3.1;
    c = 3.2;
    cout<<"The value of a is : "<<a<<" ."<<endl;
    cout<<"The value of b is : "<<b<<" ."<<endl;
    cout<<"The value of c is : "<<c<<" ."<<endl;
    sum();
    func_1();
    func_2();

    // Data type is the type of data a variable can hold-------
        //There are 3 types of datatypes----

        // i)   Built-in datatypes
                /*int -used to store integers
                  float -used to store low precision decimal numbers
                  char -used to store single characters
                  double-used to store high precision decimal numbers
                  bool -shows true or false
                  */
        // ii)  User-defined datatypes
                /*struct
                  union
                  enum
                */
        // iii) Derived datatypes
                /*array
                  function
                  pointer
                  */
    return 0;
}