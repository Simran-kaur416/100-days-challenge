#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for positive number
    if (num <= 0) {
        printf("Perfect numbers are positive integers only.\n");
        return 0;
    }

    // Find sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if perfect
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is Not a Perfect Number.\n", num);

    return 0;
}
