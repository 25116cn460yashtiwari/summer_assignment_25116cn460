#include <stdio.h>

// function to find largest element
int findLargest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// function to find smallest element
int findSmallest(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
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

    // find largest and smallest elements in the array 
    int largest = findLargest(arr, n);
    int smallest = findSmallest(arr, n);

    // display largest and smallest elements
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
