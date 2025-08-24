// Write a program to calculate the Surface area and volume of sphere
#include <stdio.h>
int main()
{
    const float pi = 3.1415;
    float radius, surfaceArea, volume;
    printf("Enter the radius of sphere: "); /// Get radius from user
    scanf("%f", &radius);
    // Surface Area
    surfaceArea = 4 * pi * radius * radius;
    // Volume of Sphere
    volume = (4.0 / 3.0) * (pi * radius * radius * radius);
    // Print the Surface area and volume of sphere
    printf("The surafe area of sphere is %.2f \n", surfaceArea);
    printf("The volume of sphere is %.2f \n", volume);
    return 0;
}