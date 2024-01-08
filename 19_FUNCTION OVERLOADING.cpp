// FUNCTION OVERLOADING

//  Function overloading means a function used for multipe tasks
// C++ uses polymorphism which means ek hi cheez jiske alag alag form ho



#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with two arguments ";
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with three arguments ";
    return a+b+c;
} 

int volume(int a){
    return a*a*a;
}

int area(int r){
    return 3.14*r*r;
}

double volume(float r, float h){
    return 3.14*r*r*h;
}

int main(){
    int a,r;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of r"<<endl;
    cin>>r;

    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3 ,7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The volume of cube of side length "<<a<<" is "<<volume(a)<<endl;
    cout<<"The area of circle of radius "<<r<<" is "<<area(r)<<endl;
    cout<<"The volume of cylinder of radius "<<r<<" is "<<volume(r)<<endl;
    return 0;
}

// it ultimately means you can create different functions with same name and whch function is yo use will figure out automatically matching the no. of arguments