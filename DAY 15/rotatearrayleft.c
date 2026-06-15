#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //  save first element
    int first = arr[0];

    // Shift elements left
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Put first element at the end
    arr[n - 1] = first;

    // Print rotated array
    printf("Array after left rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
