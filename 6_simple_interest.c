#include "stdio.h"

int main(){
    float principal, rate, time, si;
    printf("Enter the Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period in years: ");
    scanf("%f", &time);

    si = principal * rate * time;
    si = si/100;
    printf("The Simple interest is: %.2lf\n", si);
    return 0;
}