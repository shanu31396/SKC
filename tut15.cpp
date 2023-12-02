// FUNCTIONS AND FUNCTION PROTOTYPES

#include<iostream>

using namespace std;

int sum(int a, int b);  // PROTOTYPE
// int sum(int a, int b){
//         int c = a + b;
//         return c;
//     }

    // if we define the above defined function below int main() then it will throw an error 
    // and answer to this issue is function prototype
    // function prototype tells the compiler earlier that these functions will come

// FUNCTION PROTOTYPE's syntax is :
// type function-name (arguments);
// eg: int sum(int a, int  b)

// AUR YE FALTU SI CHIZ HAI, PROTOTYPE LIKHNE SE ACHHA HAI KI PURA FUNCTION HI LIKH DEIN COZ. ALMOST HALF FUNCTION TO LIKH CHUKE HOTE HI HAI 
// PROTOTYPE KE NAAM PAR, YE BS ASSURITY PROVIDE KARTA HAI KI AAEGA, AAEGA AAJ NAHI TO KAL JARUR AAEGA YE int sum() NAAM KA FUNCTION JARUR AAEGA
// STAY ALERT FUNCTION PROTOTYPE ONLY PROVIDES ASSURITY, NOT GUARANTEE



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
    Formal parameters i.e. int a and int b ,and actual parameters i.e. num1 and num2

    Formal parameters a and b will be taking values from actual parameters num1 and num2

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

// we can use void g(){
//  if we don't a function to return value after it's completion
//}


// line 7 me sum ko bata diya gaya h ki jaha pr v sum function define kiya gaya h waha num1 aur num2 ko le jao
// sum function ko pehle se bata diya gaya h ki tumhare pas jo v value aaegi wo int type hi hogi

//in [line19]sum function's prototype has been assigned with values num1 and num2,and has been asked that wherever you find sum function put num1 and num2 in it
// in [line 7] it's already asked to sum function that the value you will got will be of int type only, proceed further and return result variable