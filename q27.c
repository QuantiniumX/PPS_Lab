// to calculate sum of digit of a number

#include "stdio.h"

int main(){
    int num, r, sum;
    printf("Enter a number: ");
    scanf("%i", &num);
    while(num != 0){
        r = num % 10;
        num /= 10;
        sum += r;
    }
    printf("The sum of the digits is %i \n", sum);
}