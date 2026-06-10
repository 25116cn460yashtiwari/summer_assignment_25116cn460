#include <stdio.h>

int main() {
    int rows, i, j, space;

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print character pyramid
    for (i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print increasing characters
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        // Print decreasing characters
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
