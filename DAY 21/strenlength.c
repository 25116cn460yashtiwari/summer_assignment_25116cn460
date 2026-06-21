#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads input including spaces

    // Count characters until zero terminator '\0'
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // fgets() stores newline if input is shorter than buffer
    if(str[length - 1] == '\n') {
        length--;  
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
