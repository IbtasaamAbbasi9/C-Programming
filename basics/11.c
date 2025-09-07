/// Write a program to write the ascii value of an integer
#include <stdio.h>
int main()
{
    char character;
    printf("Enter any character: ");
    scanf("%c", &character);
    printf("The character is %c\nThe ASCII value of %c is %d", character, character, character);
    return 0;
}