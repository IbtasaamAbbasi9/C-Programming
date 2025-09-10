/// Write a program to calculate the factorial of a number
#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the number n: ");
    scanf("%d", &n);
    /// calculate the factorial
    if (n < 0)
    {
        printf("The factorial of negative number is not defined ");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("The factorial of %d is %d", n, fact);
    }
    return 0;
}