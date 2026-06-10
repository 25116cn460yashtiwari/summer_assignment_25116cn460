#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print number pyramid
    for (i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
