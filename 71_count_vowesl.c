#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "The quick brown fox jumps over the lazy dog.";
    int length = strlen(str);
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    printf("%d", count);
}
