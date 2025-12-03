#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // Read string

    // Count characters until null terminator '\0'
    while (str[count] != '\0') {
        count++;
    }

    // Exclude newline character (optional)
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
