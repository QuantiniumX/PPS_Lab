#include<stdio.h>  

int main(){    
    int n, rev = 0, rem;    
    printf("Enter a number: ");    
    scanf("%i", &n);    
    while(n != 0)    
    {    
        rem = n % 10;    
        rev=rev * 10 + rem;    
        n /= 10;    
    }    
    printf("Reversed Number: %i\n",rev);    
    return 0;  
}  