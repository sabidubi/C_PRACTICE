#include <stdio.h>

int main() {
    int l, r;

    // Problem 4: Print 3-digit Armstrong numbers in a range.
    printf("Enter range: ");
    scanf("%d%d", &l, &r);

    // Check each number in the range
    for (int n = l; n <= r; n++) {
        int x = n;
        int sum = 0;

        // Find sum of cube of digits
        while (x > 0) {
            int digit = x % 10;
            sum = sum + digit * digit * digit;
            x = x / 10;
        }

        // Armstrong condition
        if (sum == n) {
            printf("%d ", n);
        }
    }

    printf("\n");
    return 0;
}
