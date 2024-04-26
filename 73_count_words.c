#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int i = 0;
    int in_word = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            if (in_word) {
                count++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
        i++;
    }

    if (in_word) {
        count++;
    }

    return count;
}

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog.";
    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);
    return 0;
}
