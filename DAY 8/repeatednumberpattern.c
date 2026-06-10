#include <stdio.h>

int main() {
    int rows, i, j;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print repeated-number pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);  // print the row number repeatedly
        }
        printf("\n");
    }

    return 0;
}
