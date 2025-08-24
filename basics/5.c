// Write a program to calculate the area and perimter of a rectangle
#include <stdio.h>
int main()
{
    float area, perimeter, length, width;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);
    // Area
    area = length * width;
    // Perimeter
    perimeter = 2 * (length + width);
    /// Print the values
    printf("The area of rectangle is %.1f \n", area);
    printf("The perimeter of rectangle is %.1f \n", perimeter);
    return 0;
}