#include <stdio.h>

int main() {
    int n, a[100], visited[100] = {0};

    // Take array size
    printf("n: ");
    scanf("%d", &n);

    // Take array elements
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Count frequency without using extra large array
    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d -> %d\n", a[i], count);
    }

    return 0;
}
