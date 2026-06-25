#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int size1, size2, i = 0, j = 0, k = 0;

    // Input size of first array
    printf("Enter size of first sorted array: ");
    scanf("%d", &size1);

    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second sorted array: ");
    scanf("%d", &size2);

    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    i = 0; 
    j = 0; 
    k = 0;

    // Merge arrays while maintaining sorted order
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }

    // result merged array
    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
