#include <stdio.h>

// function to check if a number is perfect 
int isPerfect(int num) {
    int sum = 0;

    // calculate sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // check if sum of divisors is equal to the number
    if (sum == num && num != 0)
        return 1;  // Perfect
    else
        return 0;  // Not Perfect
}

int main() {
    int n;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // check if the number is perfect and print the result
    if (isPerfect(n))
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is not a Perfect Number.\n", n);

    return 0;
}
