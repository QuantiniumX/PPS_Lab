#include <stdio.h>

void increment_by_value(int a) { a++; }

void increment_by_reference(int *a) { (*a)++; }

int main() {
    int a = 5;
    printf("Before calling function the value of a is: %d\n", a);
    increment_by_value(a);
    printf("After calling the function using call by value: %d\n", a);
    increment_by_reference(&a);
    printf("After calling the function usin call by reference: %d\n", a);
}
