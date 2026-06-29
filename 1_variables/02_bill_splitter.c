#include <stdio.h>

int main() {
    // Problem 2: Add tax and tip, then split the bill among people.
    double bill, tax, tip;
    int people;

    printf("Bill tax%% tip%% people: ");
    scanf("%lf%lf%lf%d", &bill, &tax, &tip, &people);

    // Total bill = main bill + tax amount + tip amount.
    double total = bill + bill * tax / 100 + bill * tip / 100;

    // Each person pays equal share.
    printf("Total = %.2lf, Each pays = %.2lf\n", total, total / people);

    return 0;
}
