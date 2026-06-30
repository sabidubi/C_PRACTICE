#include <stdio.h>

int main() {
    int n, m, a[100], b[100];
    int i = 0, j = 0;

    // Take sizes of two sorted arrays
    printf("n m: ");
    scanf("%d%d", &n, &m);

    // Take first sorted array
    printf("Enter first sorted array: ");
    for (int x = 0; x < n; x++) {
        scanf("%d", &a[x]);
    }

    // Take second sorted array
    printf("Enter second sorted array: ");
    for (int x = 0; x < m; x++) {
        scanf("%d", &b[x]);
    }

    // Merge and print in sorted order
    printf("Merged array: ");

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    // Print remaining elements of first array
    while (i < n) {
        printf("%d ", a[i]);
        i++;
    }

    // Print remaining elements of second array
    while (j < m) {
        printf("%d ", b[j]);
        j++;
    }

    printf("\n");

    return 0;
}
