#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n];
    int primarySum = 0, secondarySum = 0;

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate diagonal sums
    for(int i = 0; i < n; i++) {
        primarySum += A[i][i];           // Primary diagonal (top-left to bottom-right)
        secondarySum += A[i][n - i - 1]; // Secondary diagonal (top-right to bottom-left)
    }

    //  results
    printf("Primary Diagonal Sum = %d\n", primarySum);
    printf("Secondary Diagonal Sum = %d\n", secondarySum);
    printf("Total Diagonal Sum = %d\n", primarySum + secondarySum);

    return 0;
}
