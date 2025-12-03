#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Convert to hours, minutes, seconds
    hours = seconds / 3600;            // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60;   // remaining minutes
    seconds = seconds % 60;            // remaining seconds

    // Display result
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
