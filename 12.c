/// Write a program to calculate simple interset
#include <stdio.h>
int main()
{
    float si, rate, time, principle;
    printf("Enter the principle value: ");
    scanf("%f", &principle);
    printf("Enter the rate in percentage: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);
    // Simple interest = principle*rate*time/100;
    si = (principle * rate * time) / 100;
    printf("The simple interset on the following data is %.1f", si);
    return 0;
}