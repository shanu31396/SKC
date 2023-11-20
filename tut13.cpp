// ARRAYS AND POINTERS ARITHMETIC IN C++

#include<iostream>
#include<iomanip>
// #include<bits/stdc++.h> this contains all header files of C++

using namespace std;
 
int main(){
    int i=0;


    //1st method    (most preferred for me when there are constraints on no. of input)
    int marks[5]={23,34,35,56,67};  // this square bracket is udes to declare array size 

    
    
    //2nd method    (most preferred for me when there is no constraints on no. of input)
    int mathmarks[]={22,23,45,5,6};

    //3rd method    (not a feasible method)
    int mathematics[5];
    mathematics[0] = 45 ;
    mathematics[1] = 36 ;
    mathematics[2] = 67 ;
    mathematics[3] = 78 ;
    mathematics[4] = 23 ;

    //execution of 1st method
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl<<endl;

    //execution of 2nd method
    cout<<mathmarks[0]<<endl;  
    cout<<mathmarks[1]<<endl;
    // we can update value in array as we have done in case of local variables
    mathmarks[2]=99;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl<<endl;

    for(int i=0;i<5;i++){
        cout<<"The value of marks "<<i<<" is "<<setw(2)<<mathmarks[i]<<" ."<<endl;
    }

    //execution  of 3rd method
    cout<<mathematics[0]<<endl;
    cout<<mathematics[1]<<endl;
    cout<<mathematics[2]<<endl;
    cout<<mathematics[3]<<endl;
    mathematics[3]=3;
    cout<<mathematics[4]<<endl<<endl;

    i=0;
    while(int (i)<(5)){
        cout<<"The value of marks "<<i<<" is "<<setw(2)<<mathematics[i]<<" ."<<endl;
        i++;
    }
    cout<<endl;


    i = 0;
    do{
        cout<<"The value of marks "<<i<<" is "<<setw(2)<<mathematics[i]<<" ."<<endl;
        i++;
    }while(i<5);

    // Pointers and arrays

  //UNLIKE NORMAL VARIABLES, ARRAY(considered as a kind of variable here as an instance only to got inderstood) IS ADDRESS IN ITSELF
    // i.e. int a=5 mein a ke pehle "&" lagane se variable ka address milta hai
    //but, variable ka array declare hone k baad, int sk[], sirf variable(here, sk) likhne se hi address mil jata h
    // to declare variable as an array, we use "[]" this sign after writing variable's name or array name

    // so to get value stored in array we go through this way   

     int* p = marks; // here, writing &marks to store address of "marks" will considered wrong as marks is array type and array is address in itsel
     cout<<"The value of marks[0] is "<<*p<<endl;
     cout<<"The value of marks[1] is "<<*(p+1)<<endl;
     cout<<"The value of marks[2] is "<<*(p+2)<<endl;
     cout<<"The value of marks[3] is "<<*(p+3)<<endl;
     cout<<"The value of marks[4] is "<<*(p+4)<<endl;
     
// BASIC FORMULA OF POINTER ARITHMETIC
//      address(new) = address(curent) + i*(size of datatype)
//         (p+i)     =      (p)        +       i*(4)    
//          p is pointer and i is increment arbitrary constant 
    return 0;
} 