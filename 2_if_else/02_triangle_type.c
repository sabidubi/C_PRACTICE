#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides
    printf("Enter 3 sides: ");
    scanf("%d%d%d", &a, &b, &c);

    // Check triangle validity
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Not a triangle\n");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral Triangle\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }

    return 0;
}
