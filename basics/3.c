// Write a program to calculate the area and circumference of a circle
#include <stdio.h>
int main()
{
    const float pi = 3.1415;
    float radius, circum, area;
    printf("Enter the radius of circle: "); // Get the radius from user
    scanf("%f", &radius);
    // circumference of circle
    circum = 2 * pi * radius;
    // area of circle
    area = pi * radius * radius;
    // Print the values
    printf("The circumference of circle is %.2f \n", circum);
    printf("The area of circle is %.2f \n", area);
    return 0;
}