/// Write a program to print the fabbonacci pattern
/// 0,1,1,2,3,5,8,13,21,34
#include <stdio.h>
int main()
{
    int n;
    int n1 = 0, n2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", n1);
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }

    return 0;
}