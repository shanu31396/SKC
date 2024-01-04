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
    }ep; 
    
        // if we had created a structure, 9 bytes would allocate here

        /*
        we are creating struct employ as a datatype in which we defined necessary built-in datatypes;   [line 7 to 12]
        now, we can use employees names as variables with newly defined datatype [line 54 56 58]
        now, we can treat it as normal variable just put variable name and enter value in below format
        [variable name.required variable name defined in struct]   [line 59] 
        then we can use it with cout [line 71]
        */




    union money
    {
        /* data */
        int rice; //4 byte
        char car; //1 byte
        float pounds; //4 byte

    }; 
        // here, in defining union, C++ will allocate a combined memory for all variable
        // so,min. 1 and max. 4 bytes of space will be taken here in memory as per need
        // koi 1 to koi 4 lega, agr 1 wala mangega to 1 hi denge agr koi kuchh ni bola to 4 le lenge,fir 1 ka demand hua 
        // to 1 dekar memory save kr lenge aur 4 manga to apne pass 4 bytes to hai hi

        // here, in this user-defined datatype, we can use one datatype only once
        // so, here we'll use very important feature of C++ which is memory management
        // union provides better meomry management   
        // C++ will share memory among these here


int main(){
    // Structure is used to make a collection of objects that are not of similar type
    // It is just inverse of array because in array we make collection of items of similar type 
    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice<<endl;
    
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
      
    //cout<<"The value is "<<sk.eId<<endl;
    // cout<<"The value is "<<sk.favChar<<endl;
    // cout<<"The value is "<<sk.sal<<endl;
    
    // cout<<"The value is "<<sr.eId<<endl;
    // cout<<"The value is "<<sr.favChar<<endl;
    // cout<<"The value is "<<sr.sal<<endl;
    
    // cout<<"The value is "<<st.eId<<endl;
    // cout<<"The value is "<<st.favChar<<endl;
    // cout<<"The value is "<<st.sal<<endl;
    

    enum meal{breakfast, lunch, dinner};     // user-defined datatype declared
    meal m1 = lunch;                         // new_datatype variable_name = already defined input
    cout<<m1<<endl;                          // printing the variable's value which shows position of value entered in that variable
    cout<<(m1==2)<<endl;                     // // printing variable's value by checking the given condition

    enum deal{d9,d8,d7};
    deal D9=d9;
    cout<<D9<<endl;
    

    return 0;
}