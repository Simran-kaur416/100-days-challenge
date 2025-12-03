#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, isPrime;

    // Input limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through numbers
    for (i = 2; i <= n; i++) {
        isPrime = 1; // assume prime

        // Check divisibility up to sqrt(i)
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
