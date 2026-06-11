#include <stdio.h>


int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // calculate sum
    result = sum(num1, num2);

    // output the result
    printf("Sum of %d and %d = %d\n", num1, num2, result);

    return 0;
}
