#include <stdio.h>

// Function to calculate base^exponent
int power(int base, int exp) {
    int ans = 1;

    // Multiply base exp times
    while (exp--) {
        ans *= base;
    }

    return ans;
}

int main() {
    int base, exponent;

    // Take base and exponent
    printf("base exponent: ");
    scanf("%d%d", &base, &exponent);

    // Check negative exponent
    if (exponent < 0) {
        printf("This program supports only non-negative exponent\n");
    } else {
        printf("Power = %d\n", power(base, exponent));
    }

    return 0;
}
