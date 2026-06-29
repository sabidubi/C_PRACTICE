#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int ans = 1;

    // Multiply numbers from 2 to n
    for (int i = 2; i <= n; i++) {
        ans *= i;
    }

    return ans;
}

int main() {
    int n, r;

    // Take n and r from user
    printf("Enter n r: ");
    scanf("%d%d", &n, &r);

    // Check invalid input
    if (r < 0 || r > n) {
        printf("Invalid input\n");
    } else {
        // Formula: nCr = n! / (r! * (n-r)!)
        int result = factorial(n) / (factorial(r) * factorial(n - r));
        printf("nCr = %d\n", result);
    }

    return 0;
}
