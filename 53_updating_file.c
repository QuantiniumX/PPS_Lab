#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void updateFile(const char *filename, const char *search, const char *replace) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        exit(EXIT_FAILURE);
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *content = (char *)malloc(fileSize + 1);
    if (content == NULL) {
        fprintf(stderr, "Memory allocation error.\n");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    fread(content, 1, fileSize, file);
    fclose(file);

    content[fileSize] = '\0';  

    char *position = strstr(content, search);
    if (position != NULL) {
        strncpy(position, replace, strlen(replace));
    } else {
        fprintf(stderr, "Substring not found in the file.\n");
        free(content);
        exit(EXIT_FAILURE);
    }

    file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        free(content);
        exit(EXIT_FAILURE);
    }

    fwrite(content, 1, fileSize, file);

    fclose(file);
    free(content);
}

int main(void) {
    const char *filename = "sample.txt";
    const char *search = "old_content";
    const char *replace = "new_content";

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Error creating the file.\n");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "This is the old_content in the file.\n");
    fclose(file);

    updateFile(filename, search, replace);

    printf("File has been updated.\n");

    return 0;
}

