#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Input operator
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c to consume newline

    // Switch-case for calculator
    switch (op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error! Modulus by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
