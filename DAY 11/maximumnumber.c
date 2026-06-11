#include <stdio.h>

// function to find maximum of two numbers 
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, max;

    // input two number 
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    max = maximum(num1, num2);

    //output the result
    printf("Maximum of %d and %d = %d\n", num1, num2, max);

    return 0;
}
