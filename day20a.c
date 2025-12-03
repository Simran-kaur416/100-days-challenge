#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;   // use long long for larger results
    int hasOdd = 0;          // flag to check if odd digit exists

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Work with absolute value (to handle negatives)
    if (num < 0) {
        num = -num;
    }

    // Extract digits
    while (num != 0) {
        digit = num % 10;       // get last digit
        if (digit % 2 != 0) {   // check odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;              // remove last digit
    }

    // Display result
    if (hasOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
