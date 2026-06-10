#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Start from the larger of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Keep increasing max until it is divisible by both numbers
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d = %d\n", num1, num2, max);
            break;
        }
        max++;
    }

    return 0;
}
