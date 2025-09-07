/// Write a program to calculate the perimeter and area of rectangle
#include <stdio.h>
int main()
{
    printf("\t\tProgram to calculate the Area and Perimeter of rectangle\n");
    float length, width, perimeter, area;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);
    /// Write the formulas
    area = length * width;
    perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle is %.2f\n", perimeter);
    printf("The area of the rectangle is %.2f", area);
    return 0;
}