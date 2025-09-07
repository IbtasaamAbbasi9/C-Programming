/// Write a program to build a simple calculator that performs ssimple arithematic calculations
#include <stdio.h>
int main()
{
    int num1, num2, sum, sub, mult, div, remainder;
    /// Get two integers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    /// write formulas for arithematic operations
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    remainder = num1 % num2; // gives the remainder of two numbers
    /// Print the results
    printf("The sum of %d and % d is %d \n", num1, num2, sum);
    printf("The difference of %d and %d is %d\n", num1, num2, sub);
    printf("The division of %d and %d is %d\n", num1, num2, div);
    printf("The multiplication of %d and %d is %d\n", num1, num2, mult);
    printf("The remainder of %d and %d is %d\n", num1, num2, remainder);
    
    return 0;
}