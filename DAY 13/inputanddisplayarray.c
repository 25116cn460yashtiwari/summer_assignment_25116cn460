#include <stdio.h>

// function to input array elements 
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// function to display araay elements
void displayArray(int arr[], int n) {
    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // input from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // call functions to input and display array elements
    inputArray(arr, n);
    displayArray(arr, n);

    return 0;
}
