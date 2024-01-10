#include <stdio.h> 

int main() {
    int num, i, c = 0;
    printf("Enter any number n:");
    scanf("%i", &num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            c++;
        }
    }
    if (c == 2) {
        printf("%i is a Prime number\n", num);
    }
    else {
        printf("%i is not a Prime number\n", num);
    }
    return 0;    
}