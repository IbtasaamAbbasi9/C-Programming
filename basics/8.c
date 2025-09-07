/// Write a program to convert the temperature from celsius to kelvin and fahrenhiet
#include <stdio.h>
int main()
{
    float celsius, kelvin, fahrenhiet;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    /// Use the conversion formulas
    kelvin = celsius + 273;
    fahrenhiet = ((9.0 / 5.0) * celsius) + 32;
    /// Print the values here
    printf("The value of %.1fC in kelvin is %.1fK\n", celsius, kelvin);
    printf("The value of %.1fC in Fahrenhiet is %.1fF", celsius, fahrenhiet);
    return 0;
}