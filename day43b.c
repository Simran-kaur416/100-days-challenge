#include <stdio.h>

int main() {
    char str[100];
    int len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length manually (ignore '\n')
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    int start = 0, end = len - 1;

    // Check characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
