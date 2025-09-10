// Write a program to calculate the roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float disc, root1, root2;

    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Discriminant
    disc = b * b - 4 * a * c;
    printf("The discriminant is %.2f\n", disc);

    printf("\tNature of roots:\n");

    if (disc > 0)
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are real, rational and unequal.\n");
        printf("First root = %.2f\nSecond root = %.2f\n", root1, root2);
    }
    else if (disc == 0)
    {
        root1 = root2 = -b / (2.0 * a);
        printf("The roots are real and equal.\n");
        printf("Root = %.2f\n", root1);
    }
    else
    {
        printf("The roots are imaginary (complex numbers).\n");
    }

    return 0;
}
