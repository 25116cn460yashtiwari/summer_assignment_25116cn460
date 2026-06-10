#include <stdio.h>

int main() {
    int n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm;

    // Input from user
    printf("Enter the term number (n): ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci term %d = %llu\n", n, t1);
    } else if (n == 2) {
        printf("Fibonacci term %d = %llu\n", n, t2);
    } else {
        for (i = 3; i <= n; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("Fibonacci term %d = %llu\n", n, t2);
    }

    return 0;
}
