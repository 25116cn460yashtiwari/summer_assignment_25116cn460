#include <stdio.h>
#include <ctype.h>  // for to upper()

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads input including spaces

    // Convert each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // conversion (ASCII difference)
            // OR simply: str[i] = to upper(str[i]);
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
