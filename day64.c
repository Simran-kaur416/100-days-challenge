#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove trailing newline if present
    int n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }

    int lastIndex[256];   // to store last index of each character
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLen = 0;
    int start = 0;        // start index of current window

    for (int i = 0; i < n; i++) {
        unsigned char ch = s[i];

        // If character was seen and is inside current window
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;   // move start right after previous occurrence
        }

        lastIndex[ch] = i;               // update last index of current char

        int windowLen = i - start + 1;
        if (windowLen > maxLen) {
            maxLen = windowLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}
