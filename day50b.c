#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    len = strlen(str);

    printf("All substrings:\n");

    // Start index
    for (int i = 0; i < len; i++) {
        // End index
        for (int j = i; j < len; j++) {
            // Print characters from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
