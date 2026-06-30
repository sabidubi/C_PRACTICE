#include <stdio.h>

// Function to find nth Fibonacci number using recursion
int fib(int n) {
    // Base cases
    if (n <= 1)
        return n;

    // Recursive case: fib(n) = fib(n-1) + fib(n-2)
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    // Take input from user
    printf("n: ");
    scanf("%d", &n);

    // Check invalid input
    if (n < 0)
        printf("Invalid input\n");
    else
        printf("Fibonacci = %d\n", fib(n));

    return 0;
}
