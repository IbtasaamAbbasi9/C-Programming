// Write a program to swap two numbers using + and -
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first integer: "); // Get first number from user
    scanf("%d", &a);
    printf("Enter second integer: "); // Get second number from user
    scanf("%d", &b);
    /// Print numbers before swapping
    printf("Before swapping\n Num1 is %d \n Num2 is %d \n", a, b);
    // Create the logic
    a = a + b;  
    b = a - b;
    a = a - b;
    printf("After swapping \n Num1 is %d \n Num2 is %d \n", a, b);
    return 0;
}