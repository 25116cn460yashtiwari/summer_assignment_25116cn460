#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 256  // Total possible characters

int main() {
    char str[100];
    int freq[CHAR_SIZE] = {0};  // Frequency 
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find first non-repeating character
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}
