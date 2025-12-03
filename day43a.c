#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length manually
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Reverse string in-place
    int start = 0, end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
