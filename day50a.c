#include <stdio.h>

int main() {
    char date[15];
    int dd, yyyy;
    char month[4] = "Apr";

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%*d/%d", &dd, &yyyy);  
    // %*d skips the month value since it's always 04

    printf("Converted date: %02d-%s-%d\n", dd, month, yyyy);

    return 0;
}
