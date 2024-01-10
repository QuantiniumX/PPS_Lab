#include "stdio.h"

int main(){
    int num1, num2;
    printf("Enter first number : ");
    scanf("%i", &num1);
    printf("Enter Second number : ");
    scanf("%i", &num2);
    
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("After Swapping \n First number : %i \n Second number : %i\n", num1, num2);
    return 0;
}
