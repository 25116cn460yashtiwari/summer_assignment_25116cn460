#include<stdio.h>
int main (){
    int   N, sum=0;
    // Input from user
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Using formula: sum = N*(N+1)/2
    sum = N * (N + 1) / 2;

    // Output result
    printf("Sum of first %d natural numbers = %d\n", N, sum);

    return 0;
}