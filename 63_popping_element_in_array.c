#include <stdio.h>
#include <stdlib.h>

void pop(int arr[], int num, int index, size_t size) {
    for(int i = index + 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
}

int binary_search(int arr[], size_t size, int target) {
    size_t l = 0, r = size - 1;
    while (l <= r) {
        size_t mid = l + (r - l) / 2;
        if (arr[mid] == target) {
            return mid;
        } else {
            if (arr[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int num;
    printf("Enter the element you wanna pop\n");
    scanf("%d", &num);

    int index = binary_search(arr, size, num);
    if (index != -1) {
        pop(arr, num, index, size);
    } else {
        printf("Element is not present in array\n");
    }
    printf("After popping element %d at index %d\n", num, index);
    size--;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
