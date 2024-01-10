#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;
  char filename[100];
  char ch;
  int wordCount = 0;

  printf("Enter the name of the text file: ");
  scanf("%s", filename);

  file = fopen(filename, "r");

  if (file == NULL) {
    printf("File \"%s\" not found or unable to open.\n", filename);
    return 1;
  }

  while ((ch = fgetc(file)) != EOF) {
    if (ch == ' ' || ch == '\n' || ch == '\t') {
      wordCount++;
    }
  }

  fclose(file);

  printf("Word count in file \"%s\": %d\n", filename, wordCount);

  return 0;
}
