#include <stdio.h>

int main() {
    int m, n, i, j;

    // Input size of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // check column-wise sum
    printf("Column-wise sums:\n");
    for (j = 0; j < n; j++) {
        int sum = 0;
        for (i = 0; i < m; i++) {
            sum += A[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}
