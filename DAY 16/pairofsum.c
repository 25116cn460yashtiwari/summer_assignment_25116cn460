#include <stdio.h>

int main() {
    int n, i, j, sum;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target sum
    printf("Enter the sum to find: ");
    scanf("%d", &sum);

    // Find pairs
    printf("Pairs with given sum %d are:\n", sum);
    int found = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs found with sum %d.\n", sum);
    }

    return 0;
}
