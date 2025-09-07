///Write a program to calculate simple interest
#include <stdio.h>
int main(){
    int years;
    float interestRate,principalBalance,finalAmount,simpleInterest;
    ///We know that the formula of interest is A=P(1+rt), where A=final amount, P=Initial Principal balance, and r= rate in years and years= time in years
    printf("Enter the initial Principle Balance: ");
    scanf("%f",&principalBalance);
    printf("Enter the annual interset rate(in Percentage): ");
    scanf("%f",&interestRate);
    printf("Enter the no of years: ");
    scanf("%d",&years);
    ///Convert %age in to decimals
    simpleInterest = principalBalance * interestRate* years;
    finalAmount = principalBalance + simpleInterest;
    printf("The simple interset is %.2f \n",simpleInterest);
    printf("The final amount after calculating the simple interset is %.2f \n",finalAmount);
    return 0;
}