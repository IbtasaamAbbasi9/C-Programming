// Write a program to calculate the sum and percentage of five subjects
#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, sum, total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    printf("Enter total marks: ");
    scanf("%d", &total);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;

    percentage = ((float)sum / total) * 100;   // ✅ correct formula

    printf("Your obtained marks are %d \nYour percentage is %.1f%%", sum, percentage);

    return 0;
}
