#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols], Transpose[cols][rows];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // transpose 
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            Transpose[j][i] = A[i][j];
        }
    }

    // original matrix
    printf("Original Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // transpose matrix
    printf("Transpose of the Matrix:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d\t", Transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
