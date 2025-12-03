#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    printf("Enter a positive integer n: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    // Total sum from 1 to n
    long long total = n * (n + 1) / 2;

    // Take square root of total
    long long x = (long long)sqrt((double)total);

    // Check if total is a perfect square
    if (x * x == total) {
        printf("%lld\n", x);  // pivot integer
    } else {
        printf("-1\n");
    }

    return 0;
}
