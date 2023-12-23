#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    
    cin>>test;
    while(test--){
        int x;
        cin>>x;
        int S[x];
        for(int i=0;i<x;i++){
            cin>> S[i];
        }
        int v=0;
        int od=0,ev=0;
        for(int i=0;i<x;i++){
            if(S[i]==0)od++;
            else ev++;
        }
        
        cout<<min(ev,od)<<endl;
        
    }
    return 0;
}