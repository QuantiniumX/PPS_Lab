#include<stdio.h>    
int main(){    
    int n1 = 0,n2 = 1,n3, i , number;    
    printf("Enter the number of elements:");    
    scanf("%i", &number);    
    printf("\n%i \n%i\n",n1,n2);    
    for(i = 2; i < number ; ++i)    
    {    
        n3=n1+n2;    
        printf(" %i\n",n3);    
        n1=n2;    
        n2=n3;    
    }  
    return 0;  
 }  