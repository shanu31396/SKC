// RECURSIONS AND RECURSIVE FUNCTIONS

// Recursion :--    When a function calls itself till base condition isn't met.

#include<iostream>
using namespace std;

long long int factorial(int a);
int fib(int a);

int main(){
    int a;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a);
    cout<<"The fibonacci term of fibonacci series at position "<<a<<" is "<<fib(a);
    
    return 0;
} 

long long int factorial(int a){
    if(a<=1){
        return 1; 
    }
    return a*factorial(a-1);
}

int fib(int a){
    if(a<2){
        return 1;
    }
    return fib(a-2) + fib(a-1);
}