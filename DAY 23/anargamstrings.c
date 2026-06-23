#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 256  // Total possible characters

int main() {
    char str1[100], str2[100];
    int freq[CHAR_SIZE] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // remove newline

    // If length differ, not an anagram
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    // Count frequency for string1
    for (i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    // Subtract frequency using string2
    for (i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (i = 0; i < CHAR_SIZE; i++) {
        if (freq[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}
