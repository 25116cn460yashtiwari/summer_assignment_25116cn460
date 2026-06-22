#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};  // Frequency array for all ASCII characters
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {   // Ignore newline from fgets
            freq[(unsigned char)str[i]]++;
        }
    }

    // Display frequencies
    printf("\nCharacter frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
