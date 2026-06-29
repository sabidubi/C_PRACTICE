#include <stdio.h>

// Function to find min and max using pointer parameters
void minmax(int a[], int n, int *mn, int *mx) {
    *mn = a[0];
    *mx = a[0];

    // Compare each element
    for (int i = 1; i < n; i++) {
        if (a[i] < *mn)
            *mn = a[i];

        if (a[i] > *mx)
            *mx = a[i];
    }
}

int main() {
    int n, a[100], mn, mx;

    // Take array size
    printf("n: ");
    scanf("%d", &n);

    // Take array elements
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Send addresses of mn and mx
    minmax(a, n, &mn, &mx);

    printf("Min = %d\n", mn);
    printf("Max = %d\n", mx);

    return 0;
}
