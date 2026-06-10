#include <stdio.h>

int main() {
    int a, b;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Output result
    printf("GCD = %d\n", a);

    return 0;
}
