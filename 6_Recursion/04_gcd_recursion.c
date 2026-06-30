#include <stdio.h>

// Function to find GCD using Euclidean recursion
int gcd_rec(int a, int b) {
    // Base case: if b becomes 0, a is the GCD
    if (b == 0)
        return a;

    // Recursive case
    return gcd_rec(b, a % b);
}

int main() {
    int a, b;

    // Take two numbers
    printf("a b: ");
    scanf("%d%d", &a, &b);

    // Convert negative numbers to positive
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    printf("GCD = %d\n", gcd_rec(a, b));

    return 0;
}
