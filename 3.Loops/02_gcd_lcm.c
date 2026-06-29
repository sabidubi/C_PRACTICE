#include <stdio.h>

int main() {
    int a, b, x, y;

    // Problem 2: Find GCD using Euclid loop and LCM from GCD.
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Store original values
    x = a;
    y = b;

    // Euclidean algorithm for GCD
    while (y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }

    // x is now GCD
    printf("GCD = %d\n", x);
    printf("LCM = %d\n", (a * b) / x);

    return 0;
}
