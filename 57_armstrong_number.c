#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int l = 0;
    printf("Enter a number to check if it is a armstrong number: ");
    scanf("%d", &num);
    int orig_num = num;

    while(num != 0){
        l++;
        num /= 10;
    }

    num = orig_num;
    int result = 0;

    while(num != 0){
        int rem = num % 10;
        result = result + pow(rem, l);        
        num /= 10;
    }

    if(result == orig_num){
        printf("%d is an armstrong number", orig_num);
    } else {
        printf("%d is not an armstrong number: ", orig_num);
    }
}
