//CONTROL STRUCTURE, IF-ELSE STATEMENT AND SWITCH-CASE STATEMENT

/*
There are three types of control structure--
    i) Sequence structure   //one command executes just after termination of first one
    ii) Selection structure // execute either true or false and take exit
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
    cout<<"Tell me your age :"<<endl;
    cin>>age;


    //  TO USE IF ELSE LADDER, COMMENT OUT SWITCH CASE AND TO USE SWITCH CASE, COMMENT OUT IF ELSE LADDER
  

    //  SELECTION CONTROL STRUCTUTR --- IF ELSE-IF ELSE LADDER
    if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else if((age>0)&&(age<18)){
        cout<<"You cannot come to the party"<<endl;
    }
    else if(age==18){
        cout<<"As being a kid, you'll get a kid pass for the party"<<endl;
    }
    else{
        cout<<"Welcome to the party"<<endl<<endl; 
    }

    //  SELECTION CONTROL STRUCTUTR --- SWITCH CASE STATEMENTS
    // One important thing to keep in mind while learning about switch case is that--
    // we must have to include "break;" after each case as it behaves as a full stop and stops the execution of code
    // after using case defined in it's paragraph

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
    
    return 0;
}