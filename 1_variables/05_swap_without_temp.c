#include <stdio.h>

int main() {
    // Problem 5: Swap two integers without using a temporary variable.
    int a, b;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    // Swapping using arithmetic operators.
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d\n", a, b);

    return 0;
}
