#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int freq[256] = {0};  // Frequency array for ASCII characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("String after removing duplicates: ");
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (freq[ch] == 0) {   // First occurrence
            printf("%c", ch);
            freq[ch] = 1;      // Mark as seen
        }
    }

    printf("\n");
    return 0;
}
