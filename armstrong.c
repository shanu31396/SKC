#include <stdio.h>
#include<math.h>
int find_arm(int);
int main()
{
    int n;
    printf("Enter any number to check whether it is armstrong number or not : ");
    scanf("%d", &n);
    if (find_arm(n) == 1)
        printf("It is an armstrong number .");
    else
        printf("It is not an armstrong number .");
    return 0;
}
int find_arm(int N)
{
    int sum = 0, temp, rem, digits = 0;
    temp = N;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = N;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if (N == sum)
        return 1;
    else
        return 0;
}