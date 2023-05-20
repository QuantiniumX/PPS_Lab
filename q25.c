#include "stdio.h"
int main(){
    int num, last_number, first_number;
    printf("Enter a number: ");
    scanf("%i", &num);
    last_number = num % 10;
    printf("The last number is: %i \n", last_number);
    while (num >= 10){
        num /= 10;
        first_number = num;
    }
    if(num < 10){
        first_number = num;
    }
    printf("The first number is: %i \n", first_number);
    printf("The sum of %i and %i is %i \n", first_number, last_number, first_number + last_number);
}