#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int size1, size2, i, j;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    for(i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    }


    printf("Merged array:\n");
    for(i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
