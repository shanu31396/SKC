// STRUCTURES, UNION & ENUMS IN C++

#include<iostream>
using namespace std;

//Struct, union and enum are user-defined datatypes 
typedef struct employ
    {
        /* data */
        int eId;    // 4 bytes will be used
        char favChar;   // 1 byte will be used
        float sal;  // 4 bytes will be used

        // if we had created a structure, 9 bytes would allocate here

        /*
        we r creating struct employ as a datatype for variable nmaed "employee";
        then, a datatype which is of struct employee type is created now, 
        we can use employees names as variables having data type "struct employee
        now we'll enter value to each variable(employee names)" 
        [employeename.datatype defined in struct] 
        then we can use it with cout
        */


    }ep; 

    union money
    {
        /* data */
        int rice; //4 byte
        char car; //1 byte
        float pounds; //4 byte

    }; 
        // here, in defining union C++ will allocate a combined memory for all variables in union
        // so, 8 bytes of space will be taken here in memory



       // here , in this user-defined datatype, we can use one datatype only only once
       // so, here we'll use very important feature of C++ which is memory management
       // union provides better meomry management   
       // C++ will share memory among these here


int main(){
    // Structure is used to make a collection of objects that are not of similar type
    // It is just inverse of array because in array we make collection of items of similar type 
    union money m1;
    m1.rice = 34;
    cout<<m1.rice;
    
    // ep sk;
    
    // ep sr;
    
    // ep st;
    
    // sk.eId = 1;
    // sk.favChar = 'c';
    // sk.sal = 99999999999;
    
    // sr.eId = 2;
    // sr.favChar = 'D';
    // sr.sal = 99999;
    
    // st.eId = 3;
    // st.favChar  = 'E';
    // st.sal = 987654321;
      
    // cout<<"The value is "<<sk.eId<<endl;
    // cout<<"The value is "<<sk.favChar<<endl;
    // cout<<"The value is "<<sk.sal<<endl;
    
    // cout<<"The value is "<<sr.eId<<endl;
    // cout<<"The value is "<<sr.favChar<<endl;
    // cout<<"The value is "<<sr.sal<<endl;
    
    // cout<<"The value is "<<st.eId<<endl;
    // cout<<"The value is "<<st.favChar<<endl;
    // cout<<"The value is "<<st.sal<<endl;
    
    
    

    return 0;
}