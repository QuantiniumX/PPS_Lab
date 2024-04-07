#include <stdio.h>

int main() {
    int arr[10];
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        arr[i] = i;
    }
    arr[5] = 15;
    printf("After updating value at index 5 arr[5] = %d\n", arr[5]);
}
