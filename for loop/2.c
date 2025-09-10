/// Write a program to calculate the sum of n natural numbers
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the no of terms you want to add: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}