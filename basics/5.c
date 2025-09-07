///Write a program to calculate the sum of subjects and their percentage
#include <stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,sum,totalMarks;
    float percentage;
    printf("Enter total marks: ");
    scanf("%d",&totalMarks);
    printf("Enter the marks of five subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    percentage = ((float)sum/totalMarks)*100;
    printf("Your obtained marks are %d\nYour percentage is %.2f",sum,percentage);
    return 0;
}