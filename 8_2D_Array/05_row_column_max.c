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

    // Find maximum of each row
    for (int i = 0; i < r; i++) {
        int max = a[i][0];

        for (int j = 1; j < c; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }

        printf("Row %d max = %d\n", i, max);
    }

    // Find maximum of each column
    for (int j = 0; j < c; j++) {
        int max = a[0][j];

        for (int i = 1; i < r; i++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }

        printf("Column %d max = %d\n", j, max);
    }

    return 0;
}
