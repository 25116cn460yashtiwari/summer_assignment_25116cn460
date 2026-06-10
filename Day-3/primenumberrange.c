#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, j, isPrime;

    // Input range from user
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    // Print primes in range
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i <= 1) {
            continue; // skip numbers <= 1
        }

        isPrime = 1; // assume prime

        // Check divisibility up to sqrt(i)
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
