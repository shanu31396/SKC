//CONTROL STRUCTURE, IF-ELSE STATEMENT AND SWITCH-CASE STATEMENT

/*
There are three types of control structure--
    i) Sequence structure   //one command executes just after termination of first one
    ii) Selection structure // execute either one or another condition and takes exit
    iii) Loop structure     // repeats command till condition is true then terminate
                            //all these 3 structures are basic control structure
    */

   // LOOPS CAN'T BE CREATED USING IF-ELSE AND SWITCH CASE STATEMENT
   // WE CAN ONLY EXECUTE SELECTION CONTROL STRUTURE USING IF-ELSE AND SWITCH CASE STATEMENT
   // LOOPS CAN BE CREATED USING FOR, WHILE AND DO-WHILE LOOPS

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age(in years) :"<<endl;
    cin>>age;


    //  TO USE IF ELSE LADDER IN THIS tut9.cpp, COMMENT OUT SWITCH CASE AND VICE VERSA
  

    //  SELECTION CONTROL STRUCTUTR --- IF ELSE-IF ELSE LADDER
    // one thing to keep in mind while creating conditions in if-else is that the sequence in which statements or conditions are placed
    if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else if((age>0)&&(age<18)){
        cout<<"You cannot come to the party"<<endl;
    }
    else if(age==18){
        cout<<"As being a kid, you'll get a kid pass for the party"<<endl;
    }
    else if ((age>18)&&(age<=100))
    {
        cout<<"Welcome to the party";
    }
    else{
        cout<<"You are died"<<endl<<endl; 
    }

    //  SELECTION CONTROL STRUCTURE --- SWITCH CASE STATEMENTS
    // One important thing to keep in mind while learning about switch case is that--
    // we must have to include "break;" after each case as it behaves as a full stop and stops the execution of code
    // after using the case defined in it's paragraph

    switch(age){
        case 18:
        cout<<"As being a kid, you'll get a kid pass for the party"<<endl;
        break;

        case 22:
        cout<<"Welcome to the party"<<endl;
        break;

        default:
        cout<<"No special cases"<<endl;
        break;
    }

    // after executing any of above defined switch case statement it will jump out from there to this cout command
    cout<<"Done with switch case";
    // i.e. take exit froom the loop
    
    return 0;
}