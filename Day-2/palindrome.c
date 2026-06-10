#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // store original number

    // Work with positive numbers
    if (num < 0) {
        num = -num; // make it positive
    }

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;               // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                     // remove last digit
    }

    // Check palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
