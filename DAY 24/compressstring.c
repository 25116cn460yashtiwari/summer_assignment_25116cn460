#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("Compressed string: ");
    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        // Count consecutive repeating characters
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print character and count
        printf("%c%d", str[i], count);
    }

    printf("\n");
    return 0;
}
