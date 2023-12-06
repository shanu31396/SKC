#include<stdio.h>
int main(){
    int p,x,i;
    printf("Enter the number whose table you want to print : ");
    scanf("%d",&x);
    for(i=1;i<=10;++i){
        p=x*i;
        printf("\n%d*%d=%d",x,i,p);
    }
    return 0;
}