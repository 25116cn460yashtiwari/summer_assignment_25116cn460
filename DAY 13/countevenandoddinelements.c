#include <stdio.h>

// function to count even and odd elements in the array 
void countEvenOdd(int arr[], int n, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

int main() {
    int n;

    // input from user 
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // input array elements from user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int even, odd;

    // count even and odd elements in the array 
    countEvenOdd(arr, n, &even, &odd);

    // display count of even and odd elements
    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);

    return 0;
}
