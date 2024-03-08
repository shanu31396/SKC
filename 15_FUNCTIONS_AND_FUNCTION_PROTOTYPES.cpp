// FUNCTIONS AND FUNCTION PROTOTYPES

#include<iostream>

using namespace std;

int sum(int a, int b);  // PROTOTYPE
// int sum(int a, int b){
//         int c = a + b;
//         return c;
//     }

    // if we define the above defined function below int main() then it will throw an error 
    // to remove the error we use function prototype
    // function prototype tells the compiler earlier that these functions will come

// FUNCTION PROTOTYPE's syntax is :
// type function-name (arguments);
// eg: int sum(int a, int  b);

// FUNCTION PROTOTYPE ONLY PROVIDES ASSURITY, NOT GUARANTEE

/*
        Now, some acceptable and non-acceptable forms of function prototype:
        int sum(int a, int b);  -->> ACCEPTABLE
        int sum(int , int );    -->> ACCEPTABLE
        void g( void ); -->> ACCEPTABLE
        void g();   -->> ACCEPTABLE
        
        int sum(int a, b);  -->> NOT-ACCEPTABLE    
*/

/*
    Here, we should know some sort of terminology :
    Formal parameters i.e. int a and int b of function prototype, and actual parameters i.e. num1 and num2 of driver program

    Formal parameters a and b will take values from actual parameters num1 and num2

    the name of actual and formal parameters can be same,it will not throw any error but can create confusion
*/

int main(){
    int num1, num2;
    cout<<"Enter the first number :\n";
    cin>>num1;
    cout<<"Enter the second number :\n";
    cin>>num2;
    cout<<"The sum of two numbers is :\n"<<sum(num1,num2);
    return 0;  
}

int sum(int a, int b){
        int c = a + b;
        return c;
    }

// IS IT NECESSARY FOR A FUNCTION TO RETURN A VALUE ?
// NO.

// we can use void g()
//  if we don't want a function to return value after it's completion