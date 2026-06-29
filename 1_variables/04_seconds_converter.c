#include <stdio.h>

int main() {
    // Problem 4: Convert total seconds into hour:minute:second format.
    int seconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    // 1 hour = 3600 seconds, 1 minute = 60 seconds.
    int hour = seconds / 3600;
    int minute = (seconds % 3600) / 60;
    int second = seconds % 60;

    printf("%02d:%02d:%02d\n", hour, minute, second);

    return 0;
}
