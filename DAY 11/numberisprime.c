#include <stdio.h>

// function to check if a number is prime
int isPrime(int num) {
    int i;

    
    if (num <= 1)
        return 0;  // not prime

    // check  for factors from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  // not prime
    }

    return 1;  // prime
}

int main() {
    int n;

    // input a number 
    printf("Enter a number: ");
    scanf("%d", &n);

    // check if the number is prime and output the result
    if (isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
