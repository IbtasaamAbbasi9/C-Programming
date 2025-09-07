/// Write a program to calculate the volume and area of sphere
#include <stdio.h>
int main()
{
    const float pi = 3.1415;
    float radius, volume, area;
    printf("Enter the radius of sphere: ");
    scanf("%f", &radius);
    /// Use the formulas
    volume = (4.0 / 3.0) * pi * (radius * radius * radius);
    area = 4 * pi * (radius * radius);
    /// Print the values now
    printf("The volume of the sphere is %.2f\n", volume);
    printf("The area of sphere of is %.2f", area);
    return 0;
}