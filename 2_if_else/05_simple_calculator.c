#include <stdio.h>

int main() {
    double a, b;
    char op;

    // Input expression
    printf("Enter a operator b: ");
    scanf("%lf %c %lf", &a, &op, &b);

    // Perform operation based on operator
    if (op == '+')
    {
        printf("Result = %.2lf\n", a + b);
    }
    else if (op == '-')
    {
        printf("Result = %.2lf\n", a - b);
    }
    else if (op == '*')
    {
        printf("Result = %.2lf\n", a * b);
    }
    else if (op == '/')
    {
        if (b == 0)
            printf("Division by zero is not allowed\n");
        else
            printf("Result = %.2lf\n", a / b);
    }
    else
    {
        printf("Invalid Operator\n");
    }

    return 0;
}
