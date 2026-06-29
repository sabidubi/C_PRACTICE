#include <stdio.h>

int main() {
    int year;

    // Input year
    printf("Enter year: ");
    scanf("%d", &year);

    // Leap year condition
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }

    return 0;
}
