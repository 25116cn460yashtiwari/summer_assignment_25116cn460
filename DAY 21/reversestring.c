#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads input including spaces

    // Find length manually
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Adjust for newline if present
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Reverse logic: swap characters
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string = %s\n", str);

    return 0;
}
