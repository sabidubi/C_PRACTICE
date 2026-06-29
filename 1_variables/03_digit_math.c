#include <stdio.h>

int main() {
    // Problem 3: Read a 4 digit number and print sum/product of digits.
    int n, sum = 0, product = 1;

    printf("Enter 4 digit number: ");
    scanf("%d", &n);

    // Extract digits from right side using % 10.
    for (int i = 0; i < 4; i++) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    printf("Digit sum = %d, product = %d\n", sum, product);

    return 0;
}
