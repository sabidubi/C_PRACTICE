#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[20][20], b[20][20], ans[20][20] = {0};

    // Take matrix dimensions
    printf("r1 c1 r2 c2: ");
    scanf("%d%d%d%d", &r1, &c1, &r2, &c2);

    // Matrix multiplication possible only when c1 == r2
    if (c1 != r2) {
        printf("Multiplication impossible\n");
        return 0;
    }

    // Take first matrix
    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Take second matrix
    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result matrix
    printf("Result matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
