#include <stdio.h>

int main() {
    int n, q, a[100], prefix[101] = {0};

    // Take array size
    printf("n: ");
    scanf("%d", &n);

    // Take elements and build prefix sum
    // Here array indexing starts from 1 for easier range sum
    printf("Enter elements: ");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        prefix[i] = prefix[i - 1] + a[i];
    }

    // Take number of queries
    printf("q: ");
    scanf("%d", &q);

    // Each query gives l and r
    // Sum from l to r = prefix[r] - prefix[l - 1]
    while (q--) {
        int l, r;

        printf("Enter l r: ");
        scanf("%d%d", &l, &r);

        printf("Sum = %d\n", prefix[r] - prefix[l - 1]);
    }

    return 0;
}
