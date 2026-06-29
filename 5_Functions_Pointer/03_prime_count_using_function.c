#include <stdio.h>

// Function to check whether a number is prime
int is_prime(int n) {
    if (n < 2)
        return 0;

    // Check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, a[100], count = 0;

    // Take array size
    printf("n: ");
    scanf("%d", &n);

    // Take array elements
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Count prime numbers
    for (int i = 0; i < n; i++) {
        if (is_prime(a[i])) {
            count++;
        }
    }

    printf("Prime count = %d\n", count);

    return 0;
}
