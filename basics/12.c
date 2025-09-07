//take the ascii value from the user and convert into the character
#include <stdio.h>
int main(){
    int num;
    printf("Enter the ASCII value(0-127): ");
    scanf("%d",&num);
    ///Print the Character
    printf("The character for the ASCII value %d is %c",num,num);
    return 0;
}