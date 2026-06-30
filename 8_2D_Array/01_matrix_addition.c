#include <stdio.h>

int main() {
    int r, c;
    int a[20][20], b[20][20];

    // Take number of rows and columns
    printf("r c: ");
    scanf("%d%d", &r, &c);

    // Take first matrix input
    printf("Enter first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Take second matrix input
    printf("Enter second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add and print result matrix
    printf("Sum matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
