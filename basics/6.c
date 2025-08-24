/// Write a program to swap two integers using a third variable
#include <stdio.h>
int main()
{
    int num1, num2, var3;
    printf("Enter the first number: "); // Get first number
    scanf("%d",&num1);
    printf("Enter second number: "); // Get second number
    scanf("%d",&num2);
    // Print numbers before swapping
    printf("Before swapping \n Num1 is %d \n Num2 is %d \n\n", num1, num2);
    // We used the third variable => var3
    var3 = num1;
    num1 = num2;
    num2 = var3;
    /// Print numbers after swapping
    printf("After swapping \n Num1 is %d \n Num2 is %d", num1, num2);
    return 0;
}