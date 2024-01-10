#include "stdio.h"

int main(){
    int num1, num2, temp;
    printf("Enter first number : ");
    scanf("%i", &num1);
    printf("Enter Second number : ");
    scanf("%i", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping \n First no : %i \n Second  no: %i\n", num1, num2);
    return 0;
}