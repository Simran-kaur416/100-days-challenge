#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string

    printf("Characters in the string:\n");

    // Print each character on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        // Ignore the newline character added by fgets
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
