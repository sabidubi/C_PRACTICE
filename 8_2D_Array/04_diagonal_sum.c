#include <stdio.h>

int main() {
    int n;
    int a[20][20];
    int sum = 0;

    // Take square matrix size
    printf("n: ");
    scanf("%d", &n);

    // Take matrix input
    printf("Enter square matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum both diagonals
    for (int i = 0; i < n; i++) {
        sum += a[i][i];  // Main diagonal

        // Avoid counting center element twice for odd n
        if (i != n - 1 - i) {
            sum += a[i][n - 1 - i];  // Secondary diagonal
        }
    }

    printf("Diagonal sum = %d\n", sum);

    return 0;
}
