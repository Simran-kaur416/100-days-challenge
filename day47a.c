#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[200], str2[200];
    int freq[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count character frequency from str1
    for (int i = 0; str1[i] != '\0'; i++) {
        char ch = tolower(str1[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    // Subtract character frequency using str2
    for (int i = 0; str2[i] != '\0'; i++) {
        char ch = tolower(str2[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']--;
        }
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings ARE anagrams.\n");

    return 0;
}
