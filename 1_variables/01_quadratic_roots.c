#include <stdio.h>
#include <math.h>

int main() {
    // Problem 1: Find roots of ax^2 + bx + c = 0 using arithmetic operators.
    double a, b, c, d;

    printf("Enter a b c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    // If a is 0, then it is not a quadratic equation.
    if (a == 0) {
        printf("Not a quadratic equation\n");
    } else {
        // Discriminant decides whether roots are real or complex.
        d = b * b - 4 * a * c;

        if (d >= 0) {
            printf("Roots: %.2lf %.2lf\n",
                   (-b + sqrt(d)) / (2 * a),
                   (-b - sqrt(d)) / (2 * a));
        } else {
            printf("Complex roots: %.2lf+%.2lfi %.2lf-%.2lfi\n",
                   -b / (2 * a), sqrt(-d) / (2 * a),
                   -b / (2 * a), sqrt(-d) / (2 * a));
        }
    }

    return 0;
}
