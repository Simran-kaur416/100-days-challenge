#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Calculate sum of series
    for (int k = 1; k <= n; k++) {
        sum += (double)(2 * k) / (4 * k - 1);
    }

    // Display result
    printf("Sum of the series up to %d terms = %.6lf\n", n, sum);

    return 0;
}
