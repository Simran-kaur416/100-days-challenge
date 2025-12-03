#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find number of digits
    digits = (int)log10(num) + 1;

    // Find first and last digit
    firstDigit = num / (int)pow(10, digits - 1);
    lastDigit = num % 10;

    // Extract middle part (without first and last digit)
    middlePart = num % (int)pow(10, digits - 1);  // remove first digit
    middlePart = middlePart / 10;                 // remove last digit

    // Construct swapped number
    swappedNum = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    // Display result
    printf("Number after swapping first and last digit = %d\n", swappedNum);

    return 0;
}
