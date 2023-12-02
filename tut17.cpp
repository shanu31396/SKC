#include<iostream>
using namespace std;

//always keep in mind while making a function inline that 
// make only those function inline which takes very less line of codes 
// if we make a huge function inline, our cache memory will ran out of space

//  ADVANTAGE 
//  it reduces amount of time consumed in execution of code

//  DISADVANTAGE
//  it calls function in cache memory and if huge program enters in cache, it will start occupying too much space resulting in space shortage

// inline int product(int a, int b){
//     return a*b;
// }

int product(int a, int b){
    static int c = 0;
    c = c + 1;
    return a*b+c;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b :";
    cin>>a>>b;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    return 0;
}