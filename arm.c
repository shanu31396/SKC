#include <stdio.h>
#include <math.h>
int print_arm(int);
int check_arm(int);
int main(){
    int num;
    printf("Enter the number upto which you want to print armstrong number :");
    scanf("%d", &num);
    print_arm(num);
    return 0;
}
int print_arm(int n){
    printf("Armstrong numbers upto %d are :\n",n);
    for (int i = 0; i <= n; i++){
        if(check_arm(i))
        printf("%d\n",i);
    }
}
int check_arm(int i){
    int temp,count=0,rem,sum=0;
    temp=i;
    while(temp!=0){
        count++;
        temp/=10;
    }
    temp=i;
    while(temp!=0){
        rem=temp%10;
        sum+=pow(rem,count);
        temp/=10;
    }
    if (sum==i)
    return 1;
    else
    return 0;
}