/// Write a program to check if the number is prime or not
#include <stdio.h>
int main()
{
    int num, isPrime = 1;
    printf("Enter any number to check: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("The number %d is neither prime nor composite.", num);
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("The number %d is prime", num);
        }
        else
        {
            printf("The number %d is composite.", num);
        }
    }
    return 0;
}