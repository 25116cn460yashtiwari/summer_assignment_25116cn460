#include<stdio.h>

// function to check if a number is a palindrome
int isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int n;

    // input from user 
    printf("Enter a number: ");
    scanf("%d", &n);

    // check if the number is a palindrome and print the result
    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}