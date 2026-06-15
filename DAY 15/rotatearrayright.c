#include <stdio.h>

int main() {
    int n, i;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Save last element
    int last = arr[n - 1];

    // Shift elements right
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Put last element at the beginning
    arr[0] = last;

    // Print rotated array
    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
