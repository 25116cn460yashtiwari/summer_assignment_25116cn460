#include <stdio.h>

// function to print fibonacci series up to n terms
void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm, i;

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int terms;

    // input from user
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    // call the function to print fibonacci series
    fibonacci(terms);

    return 0;
}
