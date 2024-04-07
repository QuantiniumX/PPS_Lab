#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[10] = {5, 12, 8, 3, 19, 7, 14, 2, 10, 6};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    bool found = false;
    int target, index = 0;

    printf("Enter the number you wanna find in the array\n");
    scanf("%d", &target);

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            found = true;
            index = i;
        }
    }
    if(found == true) {
        printf("%d was found at index %d\n", target, index);
    } else {
        printf("%d was not found in the array\n", target);
    }
}
