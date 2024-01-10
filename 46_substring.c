#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Hello, world!";
    char substring[10];

    strncpy(substring, str + 7, 5);
    substring[5] = '\0';  

    printf("Substring: %s\n", substring);

    return 0;
}

