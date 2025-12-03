#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;          // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                // remove last digit
    }

    // Display result
    printf("Reversed number = %d\n", reversed);

    return 0;
}
