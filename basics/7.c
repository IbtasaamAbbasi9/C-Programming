////Write a program to swap two numbers using a third variable
#include <stdio.h>
int main()
{
    int num1, num2, tempVar;
    // tempVar = temporary Variable wich we will use to swap two numbers
    /// Get the values from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\t\tBefore swapping\n\nNumber 1 is %d\nNumber 2 is %d\n", num1, num2);
    tempVar = num1;
    num1 = num2;
    num2 = tempVar;
    printf("\t\tAfter swapping\n\nNumber 1 is %d\nNumber 2 is %d", num1, num2);
    return 0;
}