#include "stdio.h"

int main() {
    int num1, num2, sum = 0;
    printf("Enter First Number: ");
    scanf("%i", &num1);
    printf("Enter Second Number: ");
    scanf("%i", &num2);
    sum = num1 + num2;
    printf("Sum of the given two numbers: %i\n", sum);
    return 0;
}