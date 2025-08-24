/// Write a program to create a simple calculator (+,-,*,/)
#include <stdio.h>
int main()
{
    int num1, num2, sum, sub, mult, div;
    printf("Enter first number: "); // Get first integer from user
    scanf("%d", &num1);
    printf("Enter second number: "); // Get second number from user
    scanf("%d", &num2);
    sum = num1 + num2;  // Add
    sub = num1 - num2;  // Subtract
    mult = num1 * num2; // Multiply
    div = num1 / num2;  // Divide
    /// print the statements
    printf("The sum of %d and %d is %d \n", num1, num2, sum);
    printf("The difference of %d and %d is %d \n", num1, num2, sub);
    printf("The multiplication of %d and %d is %d \n", num1, num2, mult);
    printf("The division of %d and %d is %d \n", num1, num2, div);
    return 0;
}