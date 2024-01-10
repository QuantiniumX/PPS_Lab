#include <stdio.h>

int main() {
    int arr[20], n, i, s, l;
    printf("Enter the number of elements you want to insert : ");
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        printf("Enter element %i : ", i + 1);
        scanf("%i", &arr[i]);
    }

    s = arr[0];
    l = arr[0];

    for (i = 1; i < n; i++){
        if (arr[i] < s){
            s = arr[i];
        }
        else if (arr[i] > l){
            l = arr[i];
        }
    }
    printf("\nLargest element is : %i", l);
    printf("\nSmallest element is : %i\n", s);
    return 0;
}