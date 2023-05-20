#include "stdio.h"
#include "string.h"
int main(){
    int num;
    char* number;
    printf("Enter a number: ");
    scanf("%i", &num);
    sprintf(number,"%i", num);
    printf("%s", number[2]);
}