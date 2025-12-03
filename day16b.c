#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;                 // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                       // remove last digit
    }

    // Check palindrome
    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is Not a Palindrome.\n", original);
    }

    return 0;
}
