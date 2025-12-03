#include <stdio.h>

// Function to find HCF using Euclidean algorithm
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, h, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF
    h = hcf(num1, num2);

    // Calculate LCM
    lcm = (num1 * num2) / h;

    // Display result
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
