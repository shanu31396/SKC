// CALL BY VALUE AND CALL BY REFERENCE

#include<iostream>

using namespace std;

int sum(int a ,int b){
    int c = a + b;
    return c;
} 
/*
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}                    Value swapped in this function won't be printed

// the swapping shown in 12th line will work, if it is just in a normal way not in function form

*/
//  CALL BY VALUE USING POINTERS
void swap(int* a,int* b){   // here, pointers of swap function got the address of x and y
    int temp = *a;          // now, the value of a is stored in temp 
    *a = *b;                // then, a got the value of b 
    *b = temp;              // and b got the value of temp
}                           // FUNCTION SWAPPED THE VALUES SUCCESSFULLY

//  CALL BY VALUE USING C++ REFERENCE VARIABLES
void swapRefVar(int &a, int &b){    //  in pointer reference, we extracted address of actual argument and store it in pointer
    int temp = a;                   // but here, we declare x as a and y as b using reference variable
    a = b;                          //  now changes made in a and b will be reflected directly to x and y
    b = temp;                       // and this changed the value of variable stored in memory
}
int &swapReferenceVar(int &a, int &b){  // Here, & b/f swapReferenceVar() shows that reference variable will be returned
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main(){
    // HERE ONE THING TO KEEP IN MIND IS THAT WE HAVE USED THE FUNCTIONS IN A CONSECUTIVE MANNER SO THE VALUE OF X AND Y WILL BE UPGRADED ACCORDINGLY    
    int x,y;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    cout<<"Enter the value of y : "<<endl;
    cin>>y;
    cout<<"The sum of two numbers is : "<<sum(x,y)<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<" ."<<endl;
    // swap(x,y);       this function won't swap values
    /* the line below will swap a and b using pointer reference*/ 
    swap( &x, &y);  // When this function get call, program takes a pause and goes to swap function 
    // here, swap function just swaps the value of x and y
    cout<<"The value of x and y after being swapped by pointer reference is "<<x<<" and "<<y<<" respectively ."<<endl;
    // here, the value get swapped in memory and x became 2 and y become 1      
    // now, the next function swapRefVar will work accordingly by considering x as y and y as x
    swapRefVar(x,y); // this will swap a and b using reference variables
    cout<<"The value of x and y after swapping is "<<x<<" and "<<y<<" respectively ."<<endl;
    //Now, what if we want to swap the value of y only and already determined the value of x
    // then we will have to create another function which will print the determined value of x by returning formal attribute and swapped value of y 
    swapReferenceVar(x,y)=999;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<" ."<<endl;
        return 0;
}