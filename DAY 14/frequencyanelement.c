#include <stdio.h>

int main() {
    int n, i, key, count = 0;

    // input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input  elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to find frequency
    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    // Count frequency
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    //  result
    if (count > 0) {
        printf("Element %d occurs %d times in the array.\n", key, count);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
