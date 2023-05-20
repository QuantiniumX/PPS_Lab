#include "stdio.h"
#include "string.h"

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char str[5];
    sprintf(str, "%d", num); // integer to string
    for(int i = (strlen(str) - 1); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}