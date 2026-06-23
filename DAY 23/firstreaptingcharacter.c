#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 256  // Total possible characters

int main() {
    char str[100];
    int freq[CHAR_SIZE] = {0}; 
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] == 2) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");
    return 0;
}
