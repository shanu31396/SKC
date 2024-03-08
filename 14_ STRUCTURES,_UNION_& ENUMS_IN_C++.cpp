// STRUCTURES, UNION & ENUMS IN C++

#include<iostream>
using namespace std;

//Struct, union and enum are user-defined datatypes 
typedef union employ
    {
        int eId;    // 4 bytes will be used
        char favChar;   // 1 byte will be used
        float sal;  // 4 bytes will be used
    }ep; 
    
        // if we had created a structure, 9 bytes would allocate here

        /*
        we are creating struct employ as a datatype in which we define necessary built-in datatypes;   [line 7 to 12]
        now, we can use employees names as variables with newly defined datatype 
        now, we can treat it as normal variable just put variable name and enter value in below format
        [variable name.required variable name defined in struct]  
        then we can use it with cout
        */


 // typedef union money
    // {
    //     int rice; //4 byte
    //     char car; //1 byte
    //     float pounds; //4 byte

// }um;
  
        // here, while defining union, C++ will allocate a combined memory for all variable
        // so,min. 1 and max. 4 bytes of space will be taken here in memory as per need
        // since, we can use only one datatype so maximum memory usage will be 4 bytes 
        // in this way we are using very important feature of C++ which is memory management
        // union provides better meomry management   
        // C++ will share memory among these here


int main(){
    // um sk;
    // sk.rice = 4;
    // cout<<sk.rice<<endl;
    // sk.pounds = 5.98;   
    // cout<<sk.pounds<<endl;

    // um sl;
    // sl.rice = 8;
    // cout<<sl.rice<<endl;

    // um sr;
    // sr.pounds = 9.89;
    // cout<<sr.pounds;

    // um sl;
    // sl.car = 'a';
    // cout<<sl.car;

    // Structure is used to make a collection of objects that are not of similar type
    // It is just inverse of array because in array we make collection of items of similar type 

    // um m1;
    // m1.rice = 34;
    // cout<<m1.rice<<endl;
    
    ep sk;
    
    ep sr;
    
    ep st;
    
    sk.eId = 1;
    cout<<"The value is "<<sk.eId<<endl;
    sk.favChar = 'c';
    cout<<"The value is "<<sk.favChar<<endl;
    sk.sal = 9;
    
    sr.eId = 2;
    sr.favChar = 'D';
    sr.sal = 56499.23;
    sr.favChar = 'f';
    
    st.eId = 3;
    st.favChar  = 'E';
    st.sal = 91;
      
    /*
    THE DIFFERENCE BETWEEN STRUCT AND UNION IS THAT STRUCT ONLY UPDATES THE VARIABLE WHOSE VALUE IS UPDATED USING DOT (i.e. sk.abc=5;    sk.abc=6) AND PRINT REST AS IT IS
    WHILE IN CASE OF UNION IT ONLY CONSIDERES THE LAST DATATYPE AS MAIN DATATYPE AND LEFT BEHIND THE REST DATATYPES AS GARBAGE VALUE IRRESPECTIVE OF WHAT KIND OF DATATYPE IS THAT
    */
    
    cout<<"The value is "<<sk.sal<<endl<<endl;
    cout<<"The value is "<<sr.eId<<endl;
    cout<<"The value of favchar is "<<sr.favChar<<endl;
    cout<<"The value of sal is "<<sr.sal<<endl<<endl;   
    
    cout<<"The value is "<<st.eId<<endl;
    cout<<"The value is "<<st.favChar<<endl;
    cout<<"The value is "<<st.sal<<endl<<endl;
    
    enum meal{breakfast, lunch, dinner};     // user-defined datatype declared
    meal m1 = lunch;                         // new_datatype variable_name = already defined input
    cout<<m1<<endl;                          // printing the variable's value which shows position of value entered in that variable
    cout<<(m1==1)<<endl;                     // // printing variable's value by checking the given condition

    enum deal{d9,d8,d7};
    deal D9=d9;
    cout<<D9<<endl;

    

    return 0;
}