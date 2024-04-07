#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before reversing\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < size / 2; i++) {
        swap(&arr[i], &arr[size - i - 1]);
    }

    printf("Array after reversing\n");
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
