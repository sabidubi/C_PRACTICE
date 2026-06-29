#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    // Problem 5: Calculate 1 + 1/2 + 1/3 + ... + 1/n.
    printf("Enter n: ");
    scanf("%d", &n);

    // Add every term from 1 to n
    for (int i = 1; i <= n; i++) {
        sum = sum + 1.0 / i;
    }

    printf("Sum = %.5lf\n", sum);

    return 0;
}
