#include <stdio.h>

int main() {
    int arr[10];
    size_t size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The entered array is: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
