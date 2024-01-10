#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[] = "Hello";
  char str2[] = "Hello";
  char str3[] = "World";

  if (strcmp(str1, str2) == 0) {
    printf("str1 and str2 are equal\n");
  } else {
    printf("str1 and str2 are not equal\n");
  }

  if (strcasecmp(str1, str3) == 0) {
    printf("str1 and str3 are equal (case-insensitive)\n");
  } else {
    printf("str1 and str3 are not equal (case-insensitive)\n");
  }

  return 0;
}
