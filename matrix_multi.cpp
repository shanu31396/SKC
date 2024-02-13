#include<iostream>
main(){int i,j,k,r1,r2,c1,c2,s=0;
    std::cin>>r1>>c1>>r2>>c2;
    int a[r1][c1],b[r2][c2],c[r1][c2];
    if(c1==r2){for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            std::cin>>a[i][j];}}
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            std::cin>>b[i][j];}}
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                s+=a[i][k]*b[k][j];}
        c[i][j]=s;s=0;}}
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            std::cout<<c[i][j]<<" ";}
            std::cout<<std::endl;}}
    else{std::cout<<" ";}}