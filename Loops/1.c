///Write a program to write n no of terms using for loops
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    ///using for loos
    for(int i=1; i<=n; i++){
        printf("%d\n",i);
    }
    return 0;
}