#include <stdio.h>

int main() {
    int r, c;
    int a[20][20];

    // Take number of rows and columns
    printf("r c: ");
    scanf("%d%d", &r, &c);

    // Take matrix input
    printf("Enter matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print transpose
    // Rows become columns and columns become rows
    printf("Transpose matrix:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
