//how to write alphabet from a to z
#include "stdio.h"

int main(){
    int s;
    printf("Enter 1 for capital letter and 2 for lowercase letters (1/2): ");
    scanf("%i", &s);
    if(s == 2){
        for(int i = 97; i <= 122; i++){
            printf("%c ", i);
        }
    }
    else if(s == 1){
        for(int j = 65; j <= 90; j++){
            printf("%c ", j);
        }
    }
}