#include <stdio.h>

int main() {
    int n, i, sum = 0, total;

    // Input size of array (n-1 elements, since one is missing)
    printf("Enter number of elements (n-1): ");
    scanf("%d", &n);

    int arr[n];
    
    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // sum of given elements
    }

    // Calculate expected sum of numbers from 1 to n+1
    total = (n + 1) * (n + 2) / 2;

    // Missing number = expected sum - actual sum
    printf("Missing number is: %d\n", total - sum);

    return 0;
}
