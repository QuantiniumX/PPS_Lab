#include "stdio.h"

int main(){
    float pi = 3.14, area = 0;
    float r;
    printf("Enter the radius of number: ");
    scanf("%f", &r);
    area = pi * r * r;
    printf("THe area of the circle is : %f \n", area);
    return 0;
}