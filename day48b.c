#include <stdio.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[300];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        // When we hit a space or newline, reverse the word before it
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1; // next word starts after the space
        }

        i++;
    }

    printf("Reversed words: %s", str);

    return 0;
}
