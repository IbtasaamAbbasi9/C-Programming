/// Get the input distance from the user in meters and convert it into kilometers
#include <stdio.h>
int main()
{
    int meters;
    float kms;
    printf("Enter distance in meters: ");
    scanf("%d", &meters);
    kms = (float)meters / 1000;
    printf("The distance %d in meters is %.2f in kms", meters, kms);
    return 0;
}