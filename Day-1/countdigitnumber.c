#include <stdio.h>

int main() {
    int num, count = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle case when number is 0
    if (num == 0) {
        count = 1;
    } else {
        // Work with positive numbers
        if (num < 0) {
            num = -num; // make it positive
        }

        // Count digits using division
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }

    // Output result
    printf("Number of digits = %d\n", count);

    return 0;
}
