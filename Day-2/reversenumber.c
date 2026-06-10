#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Work with positive numbers
    if (num < 0) {
        printf("Negative numbers are not handled in this program.\n");
        return 0;
    }

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;              // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                    // remove last digit
    }

    // Output result
    printf("Reversed number = %d\n", reversed);

    return 0;
}
