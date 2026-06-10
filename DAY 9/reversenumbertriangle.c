#include <stdio.h>

int main() {
    int rows, i, j;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print reverse number triangle
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
