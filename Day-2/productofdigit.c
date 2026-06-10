
#include <stdio.h>

int main() {
    int num, product = 1, remainder;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Work with positive numbers
    if (num < 0) {
        num = -num; // make it positive
    }

    // Special case: if number is 0
    if (num == 0) {
        product = 0;
    } else {
        // Loop to extract digits and multiply them
        while (num != 0) {
            remainder = num % 10;       // get last digit
            product *= remainder;       // multiply digit to product
            num = num / 10;             // remove last digit
        }
    }

    // Output result
    printf("Product of digits = %d\n", product);

    return 0;
}
