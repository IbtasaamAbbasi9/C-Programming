///Write a program to calculate the table of any number
#include <stdio.h>
int main(){
    int n; //n= no of which table is required
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        int mult = n*i;
        printf("%d * %d = %d \n",n,i,mult);
    }
    return 0;
}