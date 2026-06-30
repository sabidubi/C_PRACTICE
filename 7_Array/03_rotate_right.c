#include <stdio.h>

int main() {
    int n, k, a[100], b[100];

    // Take size and rotation value
    printf("n k: ");
    scanf("%d%d", &n, &k);

    // Take array elements
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reduce k if it is greater than n
    k = k % n;

    // Place every element into its new rotated position
    for (int i = 0; i < n; i++) {
        b[(i + k) % n] = a[i];
    }

    // Print rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}
