#include<stdio.h>
int main()
{
    int i,sum =0, number;
    printf("\n Please Enter the Maximum Limit Value : ");
    scanf("%d", &number);
    for(i = 2; i <= number; i= i+2)
    {
        sum +=i;
    }
    printf("The sum of the even no is %i", sum);
}