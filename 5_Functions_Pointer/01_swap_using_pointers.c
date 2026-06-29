#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;   // Store value of a
    *a = *b;         // Put value of b into a
    *b = temp;       // Put old value of a into b
}

int main() {
    int a, b;

    // Take two numbers from user
    printf("Enter a b: ");
    scanf("%d%d", &a, &b);

    // Send addresses of a and b to swap function
    swap(&a, &b);

    printf("Swapped: %d %d\n", a, b);

    return 0;
}
