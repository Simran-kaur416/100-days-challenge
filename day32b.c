#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  // frequency array for digits 0-9

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) num = -num;

    // Count digit frequencies
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    int maxDigit = 0, maxFreq = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", maxDigit, maxFreq);

    return 0;
}
