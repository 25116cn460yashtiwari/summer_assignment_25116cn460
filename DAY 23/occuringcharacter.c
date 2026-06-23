#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 256  // Total possible characters

int main() {
    char str[100];
    int freq[CHAR_SIZE] = {0};  // Frequency array
    int i, maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Count no. of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find character with maximum no.
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    if (maxFreq > 0)
        printf("Maximum occurring character: %c\nFrequency: %d\n", maxChar, maxFreq);
    else
        printf("String is empty.\n");

    return 0;
}
