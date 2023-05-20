#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
    for(int i = 0; i < 5; i++){
        int cube = arr[i]*arr[i]*arr[i];
        printf("cube of %i is: %i\n", arr[i], cube);
    }
}