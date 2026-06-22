#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Reads full line including spaces

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check for word boundaries
        if ((i == 0 && !isspace(str[i])) || 
            (!isspace(str[i]) && isspace(str[i-1]))) {
            words++;
        }
    }

    printf("Total words = %d\n", words);

    return 0;
}
