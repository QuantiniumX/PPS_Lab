#include "stdio.h"

int main(){
    int num1, num2;
    printf("Enter first number : ");
    scanf("%i", &num1);
    printf("Enter Second number : ");
    scanf("%i", &num2);

    if (num1 > num2){
        printf("First number is greatest\n");
    }
    else {
        printf("Second number is greatest\n");
    }
}