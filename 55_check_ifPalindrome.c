#include <stdio.h>
#include <string.h>

int isPalindrome(char *word) {
    int length = strlen(word);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0; 
        }
    }

    return 1;
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    if (isPalindrome(word)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}

