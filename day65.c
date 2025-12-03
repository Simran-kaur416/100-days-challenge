#include <stdio.h>
#include <string.h>

int main() {
    char s[200], t[200];
    int freq[26] = {0};

    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);

    // Remove newline characters
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';

    // If lengths differ, not an anagram
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequencies for s
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract frequencies using t
    for (int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
