#include <stdio.h>

int main() {
    int rows, i, j;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print character triangle
    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);  // print characters starting from 'A'
        }
        printf("\n");
    }

    return 0;
}
