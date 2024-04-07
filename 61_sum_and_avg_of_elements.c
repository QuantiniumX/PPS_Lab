#include <stdio.h>

int main() {
    int arr[10];
    size_t size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int sum;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    int avg = sum / size;
    printf("Sum = %d\nAverage: %d\n", sum, avg);
}
