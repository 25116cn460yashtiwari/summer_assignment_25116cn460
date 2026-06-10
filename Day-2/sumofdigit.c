#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Work with positive numbers
    if (num < 0) {
        num = -num; // make it positive
    }

    // Loop to extract digits and add them
    while (num != 0) {
        remainder = num % 10;   // get last digit
        sum += remainder;       // add digit to sum
        num = num / 10;         // remove last digit
    }

    // Output result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
