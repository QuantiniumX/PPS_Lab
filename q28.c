#include "stdio.h"

int main(){
    int num, product = 1, r;
    printf("Enter a number: ");
    scanf("%i", &num);
    while(num != 0){
        r = num % 10;
        num /= 10;
        product *= r;
    }
    printf("The product of the digits of the number is %i", product);
}