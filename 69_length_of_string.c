#include <stdio.h>
#include <string.h>

int length(char* str) {
    int i = 0; 
    int len = 0;
    while(str[i] != '\0') {
        len++;
        i++;
    }
    return len;
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    int leng = length(str);
    printf("Length of string %s is %d\n", str, leng);
}
