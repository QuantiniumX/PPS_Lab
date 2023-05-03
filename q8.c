#include "stdio.h"

int main(){
    int num1, num2, num3;
    printf("Enter first number : ");
    scanf("%i", &num1);
    printf("Enter Second number : ");
    scanf("%i", &num2);
    printf("Enter Third number : ");
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("First number is the greatest\n");
    }
    else if (num2 > num1 && num2 > num3) {
        printf("Second number is the greatest\n");
    }
    else {
        printf("Third number is the greatest\n");
    }
}