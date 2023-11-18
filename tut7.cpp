//REFERENCE VARIABLE AND TYPECASTING
#include<iostream>
int c = 5;
using namespace std;

int main(){

// --------------------BUILT-IN DATATYPES-------------------- //
    int a, b, c;
    cout<<endl;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    c = a + b;
    cout<<"The sum of a and b is : "<<c<<" ."<<endl;
    cout<<"The value of global c is : "<<::c<<" ."<<endl<<endl;


// --------------------FLOAT, DOUBLE AND LONG-DOUBLE LITERALS-------------------- //
    float d = 34.4;
    d = 34.4f;    
    d = 34.4F; //all three lines represent same datatype as mentioned already before their variable's name
    long double e = 34.4;    
    e = 34.4l;
    e = 34.4L; //all three lines represent same datatype as mentioned already before their variable's name 


    // By default, decimal numbers are considered as double in C++ compiler and hence, in
    //order to specify that whether the given no. is float or double, we add 'f' or 'F' and 'l' or 'L' as it's suffix
    cout<<"The value of d is "<<d<<" "<<"and the value of e is "<<e<<" .\n";

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;  
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl<<endl;

    // --------------------REFERENCE VARIABLE-------------------- //
    //To call same value with different names(i.e. reference) we use reference variable
    float that = 455;
    float & there = that;
    cout<<that<<endl;
    cout<<there<<endl;


    string boy = "SK";
    string & man = boy;
    string & wrestler = man;
    string & muscular = wrestler;
    cout<<muscular<<endl;

    char girl = 'a';
    char & beautiful = girl;
    char & soft = beautiful;
    char & fair = soft;
    cout<<fair<<endl;


// --------------------TYPECASTING-------------------- //
    //typecasting refers to conversion of one datatype to another
    int x = 3;
    float y = 34.576;
    char z = 'a';
    cout<<x<<endl<<y<<endl<<z<<endl<<endl;
    cout<<float(x)<<endl<<(int)y<<endl<<int(z)<<endl<<endl;


    char varia = 'f';
    cout<<varia<<endl;
    cout<<int(varia)<<endl;

    cout<<(x+y)<<endl;
    cout<<(x+(int)y)<<endl;
    cout<<(x+int(y))<<endl;
    return 0;
}