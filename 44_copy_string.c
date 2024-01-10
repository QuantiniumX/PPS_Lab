#include <stdio.h>
#include <string.h>

int main(void) {
  char source[] = "Hello, world!";
  char destination[20];

  strcpy(destination, source);

  printf("Copied string: %s\n", destination);

  return 0;
}
