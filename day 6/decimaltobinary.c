#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Handle zero case
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // store remainder
        num = num / 2;        // divide by 2
        i++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
