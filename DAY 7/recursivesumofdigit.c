#include <stdio.h>

// Recursive function to find sum of digits
int sumOfDigits(int n) {
    if (n == 0)   // base case
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10); // recursive call
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    printf("Sum of digits = %d\n", sumOfDigits(num));

    return 0;
}
