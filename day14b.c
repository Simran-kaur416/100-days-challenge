#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long for large results

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check if there are even numbers
    if (n < 2) {
        printf("No even numbers between 1 and %d.\n", n);
    } else {
        // Multiply even numbers
        for (i = 2; i <= n; i += 2) {
            product *= i;
        }
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}
