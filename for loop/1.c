/// Write a program to write first n natural numbers using for loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any integer: ");
    scanf("%d", &n);
    /// use for loop for the repitition
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n", i);
    }
    return 0;
}