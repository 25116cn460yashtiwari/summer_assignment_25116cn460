#include <stdio.h>


int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    long long num;
    int largestPrime = -1;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    // Divide by 2 until odd
    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    // Check odd factors
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    // If num itself is prime and > 2
    if (num > 2) {
        largestPrime = num;
    }

    // Output result
    if (largestPrime != -1) {
        printf("Largest prime factor = %d\n", largestPrime);
    } else {
        printf("No prime factors found.\n");
    }

    return 0;
}
