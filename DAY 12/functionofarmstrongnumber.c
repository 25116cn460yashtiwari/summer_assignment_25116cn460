#include <stdio.h>
#include <math.h>

// function to check if a number is an armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int remainder, n = 0;
    double result = 0.0;

    // find the number of digits in the number
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calculate the sum of the nth power of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // check if the resultl is equal to the original number
    if ((int)result == num)
        return 1;  // Armstrong
    else
        return 0;  // Not Armstrong
}

int main() {
    int n;

    // input from user 
    printf("Enter a number: ");
    scanf("%d", &n);

    // check if the number is an armstrong number and print the result
    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
