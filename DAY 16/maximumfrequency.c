#include <stdio.h>

int main() {
    int n, i, j, maxFreq = 0, element;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find frequency of each element
    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", element);
    printf("Frequency: %d\n", maxFreq);

    return 0;
}
