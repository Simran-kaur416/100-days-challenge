#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for numbers in each row
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");  // move to next line after each row
    }

    return 0;
}
