#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count set bits
    while (num > 0) {
        if (num & 1) {   // check last bit
            count++;
        }
        num >>= 1;       // right shift by 1
    }

    // Output result
    printf("Number of set bits = %d\n", count);

    return 0;
}
