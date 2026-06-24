#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;
    char word[50];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        // Reset current word
        j = 0;
        currLen = 0;

        // Extract word until space or end
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
            currLen++;
        }
        word[j] = '\0';

        // Update longest word if needed
        if (currLen > maxLen) {
            maxLen = currLen;
            strcpy(longest, word);
        }

        
        while (str[i] == ' ') {
            i++;
        }
    }

    if (maxLen > 0)
        printf("Longest word: %s\nLength: %d\n", longest, maxLen);
    else
        printf("No words found.\n");

    return 0;
}
