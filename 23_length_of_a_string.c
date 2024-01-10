#include "stdio.h"
#include <string.h> 

int main(){
    char * num;
    printf("Enter a number: ");
    scanf("%s", num);
    printf("The length of the number is : %zu \n", strlen(num));
}
