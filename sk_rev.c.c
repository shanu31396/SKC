#include<stdio.h>
int main(){
    int i;
    printf("enter a no. : ");
    scanf("%d",&i);
    (i%2==0)?printf("even"):printf("odd");
    return 0;
}