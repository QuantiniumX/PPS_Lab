#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[8] = " World!";

    strcat(str1, str2);
    printf("Concatanating str1 and str2: %s\n", str1);

    char str3[100];
    strncpy(str3, str1, 100);
    printf("Copying str1 to str3: %s\n", str3);

    if(strcmp(str3, str1) == 0) {
        printf("Both the strings are same\n");
    } else {
        printf("String are not same\n");
    }

    int len = strlen(str3);
    printf("Length of str is: %d\n", len);

    char str4[100];
    for(int i = 0; i < len; i++) {
        str4[i] = str3[len - i - 1];
    }
    printf("String 4 is %s", str4);
}

