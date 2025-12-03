#include <stdio.h>

int main() {
    int i, j, n = 5;

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n");  // move to next line
    }

    return 0;
}
