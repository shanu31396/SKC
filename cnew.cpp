#include<iostream>
using namespace std;
int main(){
    int T;
    
    cin>>T;
    for(int i=0;i<T;i++){
        int X,Y,Z;
        cout<<"Enter the values of test cases (X,Y,Z):"<<(i+1);
        cin>>X>>Y>>Z;

        int TotalStudents=X*Y;

        double PassPercentage=((double)Z/TotalStudents)*100;

        if(PassPercentage > 50){
            cout<<"YES\n",i+1;
        }
        else{
            cout<<"NO\n",i+1;
        }
    }
    return 0;
}   