#include <stdio.h>
#include <string.h>

int main() {
    char str[300];
    char longest[100] = "";
    char current[100];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        // If not space or newline, keep building current word
        if (str[i] != ' ' && str[i] != '\n') {
            current[j++] = str[i];
        } 
        else {
            current[j] = '\0';  // end current word

            // Compare lengths
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }

            j = 0; // reset for next word
        }

        i++;
    }

    // Handle the last word (in case no trailing space)
    current[j] = '\0';
    if (strlen(current) > strlen(longest)) {
        strcpy(longest, current);
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %lu\n", strlen(longest));

    return 0;
}
