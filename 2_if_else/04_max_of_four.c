#include <stdio.h>

int main() {
    int a, b, c, d, max;

    // Input four numbers
    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    // Assume first number is maximum
    max = a;

    // Compare with remaining numbers
    if (b > max)
        max = b;

    if (c > max)
        max = c;

    if (d > max)
        max = d;

    printf("Maximum = %d\n", max);

    return 0;
}
