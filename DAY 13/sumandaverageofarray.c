#include <stdio.h>
//function to calculate sum of array 
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// function to calculate average of array
float averageArray(int arr[], int n) {
    int sum = sumArray(arr, n);
    return (float)sum / n;
}

int main() {
    int n;

    //input from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // input array elements from user 
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // calculate sum and average of array elements 
    int sum = sumArray(arr, n);
    float avg = averageArray(arr, n);

    // display sum and average of array elements
    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}
