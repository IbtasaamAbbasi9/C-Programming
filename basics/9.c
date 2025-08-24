/// Write a program to convert Celcius to kelvin and farhenheit scale
#include <stdio.h>
int main()
{
    float celsius, kelvin, farhenhiet;
    printf("Enter the celcius scale temperature: "); // Get the celsius temperature
    scanf("%f", &celsius);
    // Now convert to kelvin and farhenheit
    kelvin = celsius + 273;
    farhenhiet = (celsius * 9 / 5) + 32;
    // Print the values here
    printf("The kelvin scale reading on %.1fC is %.2f \n", celsius, kelvin);
    printf("The Farhenhiet scale reading on %.1fC is %.1f \n", celsius, farhenhiet);

    return 0;
}
