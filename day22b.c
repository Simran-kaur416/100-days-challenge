#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Calculate sum of series
    for (int k = 1; k <= n; k++) {
        sum += (double)(2 * k - 1) / (2 * k);
    }

    // Display result
    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
