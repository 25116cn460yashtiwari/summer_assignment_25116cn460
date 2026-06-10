#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, n;
    double result;

    // Input range from user
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Loop through range
    for (num = start; num <= end; num++) {
        originalNum = num;
        n = 0;
        result = 0.0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Calculate sum of digits^n
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // Check Armstrong condition
        if ((int)result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
