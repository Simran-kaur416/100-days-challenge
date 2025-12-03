#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // assume prime initially

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime check
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // found a divisor
                break;
            }
        }

        if (isPrime)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}
