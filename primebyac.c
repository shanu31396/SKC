#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to check whether it is prime or not : ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not a prime number");
        // negative numbers can't be prime or composite
    }
    if (n == 2)
    {
        printf("The number is even prime");
    }
    for (int i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0)
        {
            printf("Composite");
            break;
        }
        else
        {
            printf("Prime");
            break;
        }
    }

    return 0;
}