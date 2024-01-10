#include<stdio.h>

int main ()
{
    int num, sum = 0;
    printf("Enter a number : ");
    scanf("%i", &num);
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
    printf("Sum: %d\n",sum);
    return 0;
}
