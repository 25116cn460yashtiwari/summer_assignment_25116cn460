#include <stdio.h>

int main() {
    int n, i, j = 0;

    // Input size 
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //  move non-zero elements forward
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    // Fill remaining place with zeroes
    while (j < n) {
        arr[j++] = 0;
    }

    // Print result
    printf("Array after moving zeroes to end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
