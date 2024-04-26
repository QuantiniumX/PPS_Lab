#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "The quick brown fox jumps over the lazy dog.";
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            continue;
        }
        printf("%c", str[i]);
    }
}
