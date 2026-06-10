#include <stdio.h>

int main() {
    int rows, i, j;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print repeated-character pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);  // print character based on row
        }
        printf("\n");
    }

    return 0;
}
