#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int num, int rev) {
    if (num == 0)   // base case
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;


    printf("Enter a number: ");
    scanf("%d", &num);

    // Call recursive function
    reversed = reverseNumber(num, 0);

    printf("Reversed number = %d\n", reversed);

    return 0;
}
