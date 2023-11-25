#include<iostream>
using namespace std;
int main(){;
    int n,c,b=1,a=0;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<"Fibonacci series :";
    
    for (int i = 0; i <= n; i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}