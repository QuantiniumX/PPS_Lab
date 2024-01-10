#include <stdio.h>

int main() {
  int i, number;
  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);
  printf("\n Even Numbers between 1 and %d are : \n", number);
  for (i = 2; i <= number; i += 2) {
    printf(" %d\t", i);
  }
  return 0;
}
