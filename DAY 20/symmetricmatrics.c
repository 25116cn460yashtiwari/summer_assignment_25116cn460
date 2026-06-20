#include <stdio.h>

int main() {
    int n, i, j;
    int flag = 1;  

    // Input size of square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check symmetry: A[i][j] == A[j][i]
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                flag = 0;  // Not symmetric
                break;
            }
        }
        if (flag == 0) break;
    }

    //  result
    if (flag == 1)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
