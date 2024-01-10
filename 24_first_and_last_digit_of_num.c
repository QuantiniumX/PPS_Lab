#include "stdio.h"
#include "string.h"
int main(){
    char* num;
    printf("Enter a number: ");
    scanf("%s", num);
    char x = num[0];
    printf("The first numbers is %c \n", x);
    int n = strlen(num);
    char y = num[n - 1];
    printf("The Last number is %c\n", y);
}