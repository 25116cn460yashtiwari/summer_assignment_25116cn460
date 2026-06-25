
#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 256  // Total possible characters

int main() {
    char str1[100], str2[100];
    int freq1[CHAR_SIZE] = {0};
    int freq2[CHAR_SIZE] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // remove newline

    // Count frequency of characters in str1
    for (i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]] = 1;
    }

    // Count frequency of characters in str2
    for (i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]] = 1;
    }

    printf("Common characters: ");
    for (i = 0; i < CHAR_SIZE; i++) {
        if (freq1[i] && freq2[i]) {
            printf("%c ", i);
        }
    }
    printf("\n");

    return 0;
}
