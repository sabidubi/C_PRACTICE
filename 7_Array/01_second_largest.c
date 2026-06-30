#include <stdio.h>
#include <limits.h>

int main() {
    int n, a[100];
    int max = INT_MIN;
    int second = INT_MIN;

    // Take array size
    printf("n: ");
    scanf("%d", &n);

    // Take array elements
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Find largest and second largest distinct element
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            second = max;
            max = a[i];
        } else if (a[i] > second && a[i] != max) {
            second = a[i];
        }
    }

    // Check if second largest exists
    if (second == INT_MIN)
        printf("Second largest distinct element not found\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}
