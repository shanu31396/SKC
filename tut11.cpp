//BREAK AND CONTINUE STATEMENTS IN C++
#include<iostream>
using namespace std;
int main(){
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==2){
    //         break; // here, execution stops completely even without looking for new condition
    //     }

    //  }
    for (int i = 0; i < 4; i++)
    {   
        if(i==2){ 
            continue; // here, execution stops only for current "if" command's condition
        }cout<<i<<endl;
        
    }
    
    
    return 0;
}