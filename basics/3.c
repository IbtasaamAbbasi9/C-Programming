// Write a program to calculate the area and circumference of a circle
#include <stdio.h>
int main()
{
    printf("\t\t Program to calculate the area and circumference of circle\n\n");
    const float pi = 3.1415;
    float radius, circumFerence, area;
    /// Get the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    // Circumference of circle
    circumFerence = 2 * pi * radius;
    /// Area of circle
    area = pi * radius * radius;
    /// Print the computed values
    printf("The circumference of circle is %.2f\n",circumFerence);
    printf("The area of circle is %.2f",area);
    return 0;
}