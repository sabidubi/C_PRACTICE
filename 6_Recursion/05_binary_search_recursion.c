#include <stdio.h>

// Function to perform recursive binary search
int binary_search_rec(int a[], int left, int right, int key) {
    // Base case: search range finished
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    // If key is found
    if (a[mid] == key)
        return mid;

    // Search left half
    if (key < a[mid])
        return binary_search_rec(a, left, mid - 1, key);

    // Search right half
    return binary_search_rec(a, mid + 1, right, key);
}

int main() {
    int n, a[100], key;

    // Take array size
    printf("n: ");
    scanf("%d", &n);

    // Take sorted array elements
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Take search key
    printf("key: ");
    scanf("%d", &key);

    // Call recursive binary search
    int position = binary_search_rec(a, 0, n - 1, key);

    if (position == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", position);

    return 0;
}
