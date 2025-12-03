#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
