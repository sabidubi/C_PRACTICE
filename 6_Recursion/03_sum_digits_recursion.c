#include <stdio.h>

// Function to calculate sum of digits using recursion
int sum_digits(int n) {
    // Base case: no digit left
    if (n == 0)
        return 0;

    // Recursive case: last digit + sum of remaining digits
    return n % 10 + sum_digits(n / 10);
}

int main() {
    int n;

    // Take number from user
    printf("number: ");
    scanf("%d", &n);

    // Make negative number positive
    if (n < 0)
        n = -n;

    printf("Sum of digits = %d\n", sum_digits(n));

    return 0;
}
