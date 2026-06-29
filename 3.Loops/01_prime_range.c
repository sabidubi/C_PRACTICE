#include <stdio.h>

int main() {
    int l, r;

    // Problem 1: Print all prime numbers in a given range.
    printf("Enter range: ");
    scanf("%d%d", &l, &r);

    // Check every number from l to r
    for (int n = l; n <= r; n++) {
        int prime = 1;

        // Numbers less than or equal to 1 are not prime
        if (n <= 1) {
            prime = 0;
        }

        // Check if n has any divisor from 2 to sqrt(n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }

        // Print if prime
        if (prime) {
            printf("%d ", n);
        }
    }

    printf("\n");
    return 0;
}
