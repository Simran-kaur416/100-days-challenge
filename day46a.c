#include <stdio.h>

int isVowel(char ch) {
    ch = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch; // convert to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[200], result[200];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Build result string without vowels
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0'; // null-terminate the new string

    printf("String after removing vowels: %s", result);

    return 0;
}
