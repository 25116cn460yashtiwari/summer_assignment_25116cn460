#include <stdio.h>

int main() {
    int n, i, j;

    // Input size of square
    printf("Enter size of square: ");
    scanf("%d", &n);

    // Print hollow square
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print star at borders, space inside
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
