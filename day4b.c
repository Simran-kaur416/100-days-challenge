#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum using formula
    sum = n * (n + 1) / 2;

    // Display result
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
