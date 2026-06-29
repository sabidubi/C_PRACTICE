#include <stdio.h>

int main() {
    int n, original, reverse = 0;

    // Problem 3: Reverse a number and check palindrome.
    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    // Reverse the number digit by digit
    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reverse = %d\n", reverse);

    // Check palindrome
    if (original == reverse) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
