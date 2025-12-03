#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;  // use large type for big results

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
