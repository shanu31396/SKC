#include<stdio.h>
int main(){
    int age=22;
    char star='*';
    float price=100.00;
    int *ptr_age=&age;
    char *ptr_star=&star;
    float *ptr_price=&price;
    printf("The value at address of age id %d.",*ptr_age);

    return 0;
}