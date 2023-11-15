#include<iostream>
using namespace std;
int main(){
    int X,Y;
    cin>>X>>Y;
    if((0<= X <=7)&&(0<= Y <=7)){
        cout<<(7-(X+Y));
    }
    else{
        cout<<" ";
    }
    return 0;
}