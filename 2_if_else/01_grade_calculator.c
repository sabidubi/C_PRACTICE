#include <stdio.h>

int main() {
    int marks;

    // Input marks from user
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Determine grade using if-else ladder
    if (marks >= 80)
        printf("Grade: A+\n");
    else if (marks >= 70)
        printf("Grade: A\n");
    else if (marks >= 60)
        printf("Grade: A-\n");
    else if (marks >= 50)
        printf("Grade: B\n");
    else if (marks >= 40)
        printf("Grade: C\n");
    else
        printf("Fail\n");

    return 0;
}
