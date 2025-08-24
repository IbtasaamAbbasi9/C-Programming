// Write a program to calculate the area of ellipse
#include <stdio.h>
int main()
{
    const float pi = 3.1415;
    float a, b, area; // a = MajorLength, b = MinorLength
    printf("Enter length of major axis: ");
    scanf("%f", &a);
    printf("Enter length of minor length: ");
    scanf("%f", &b);
    /// Now write the formula
    area = pi * a * b;
    printf("The area of ellipse is %.2f",area);
    return 0;
}