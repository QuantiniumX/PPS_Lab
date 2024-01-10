#include <stdio.h>
#include <stdlib.h>

void writeArrayToFile(const char *filename, int *arr, size_t size) {
  FILE *file = fopen(filename, "wb");

  if (file == NULL) {
    fprintf(stderr, "Error opening file for writing.\n");
    exit(EXIT_FAILURE);
  }

  fwrite(arr, sizeof(int), size, file);

  fclose(file);
}

void readArrayFromFile(const char *filename, int *arr, size_t size) {
  FILE *file = fopen(filename, "rb");

  if (file == NULL) {
    fprintf(stderr, "Error opening file for reading.\n");
    exit(EXIT_FAILURE);
  }

  fread(arr, sizeof(int), size, file);

  fclose(file);
}

int main(void) {
  const char *filename = "array_data.bin";
  int originalArray[] = {10, 20, 30, 40, 50};
  size_t arraySize = sizeof(originalArray) / sizeof(originalArray[0]);
  int readArray[arraySize];

  writeArrayToFile(filename, originalArray, arraySize);

  readArrayFromFile(filename, readArray, arraySize);

  printf("Original Array: ");
  for (size_t i = 0; i < arraySize; i++) {
    printf("%d ", originalArray[i]);
  }

  printf("\nRead Array from File: ");
  for (size_t i = 0; i < arraySize; i++) {
    printf("%d ", readArray[i]);
  }

  return 0;
}
