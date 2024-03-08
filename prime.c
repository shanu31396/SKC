#include<stdio.h>
int main(){
    int n,a,count=0;
    printf("Enter the number to check whether it is prime or not : ");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Not a prime number");
    }
    if(n==1){
        printf("Not a prime number");
    }
    for (int i = 1; i <= n; i++)
    {
        a=n%i;
        if(a==0)
        count++;
    }
    if(count<3){
        printf("Prime number");
    }
    else{
        printf("Composite number");
    }
    return 0;
}
