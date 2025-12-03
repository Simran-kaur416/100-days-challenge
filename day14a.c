#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum using formula
    sum = n * n;

    // Display result
    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
