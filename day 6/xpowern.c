#include <stdio.h>

int main() {
    int x, n;
    
    long long result = 1;  // use long long for larger results

    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    // negative exponent case
    if (n < 0) {
        printf("This program handles only non-negative exponents.\n");
        return 0;
    }

    // Compute x^n using loop
    for (int i = 1; i <= n; i++) {
        result *= x;
    }


    printf("%d^%d = %lld\n", x, n, result);

    return 0;
}
