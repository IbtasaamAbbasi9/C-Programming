// Write a program to calculate the table of a number
#include <stdio.h>
int main()
{
    int tableNo, result;
    printf("Enter the table you want to get: ");
    scanf("%d", &tableNo);
    for (int i = 1; i <= 10; i++)
    {
        result = tableNo * i;
        printf("%d * %d = %d\n", tableNo, i, result);
    }
    return 0;
}