#include <limits.h>
#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int min = INT_MAX;

    for (int i = 0; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    int secMin = INT_MAX;
    for (int i = 0; i < 10; i++) {
        if (arr[i] < secMin && arr[i] != min) {
            secMin = arr[i];
        }
    }

    printf("Second  min element is : %d\n", secMin);

    return 0;
}
