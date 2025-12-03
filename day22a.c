#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of factorials of digits
    while (num != 0) {
        remainder = num % 10;          // extract last digit
        sum += factorial(remainder);   // add factorial of digit
        num /= 10;                     // remove last digit
    }

    // Check Strong Number condition
    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is Not a Strong Number.\n", original);

    return 0;
}
