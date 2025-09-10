////Write a program to calculate the power of a number using loops
#include <stdio.h>
int main()
{
    int base, exponent;
    long result = 1;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    if (exponent < 0)
    {
        printf("Negative exponents are not supported, Use positive ones.");
    }
    else
    {
        for (int i = 1; i <= exponent; i++)
        {
            result = base * result;
        }
        printf("%d", result);
    }
    return 0;
}