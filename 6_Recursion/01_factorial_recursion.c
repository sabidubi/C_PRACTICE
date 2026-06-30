#include <stdio.h>

// Function to calculate factorial using recursion
int fact(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1)
        return 1;

    // Recursive case: n! = n * (n - 1)!
    return n * fact(n - 1);
}

int main() {
    int n;

    // Take input from user
    printf("n: ");
    scanf("%d", &n);

    // Check negative input
    if (n < 0)
        printf("Factorial is not defined for negative numbers\n");
    else
        printf("Factorial = %d\n", fact(n));

    return 0;
}
