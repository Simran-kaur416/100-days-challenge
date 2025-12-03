#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int len;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline
    len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Find the start index of the surname (last word)
    int lastStart = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            lastStart = i + 1;
    }

    // If no space, name has one word (just print it)
    if (lastStart == -1) {
        printf("%s\n", name);
        return 0;
    }

    // Print initials (all words before surname)
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (int i = 1; i < lastStart - 1; i++) {
        if (name[i] == ' ' && name[i+1] != ' ')
            printf("%c. ", name[i+1]);
    }

    // Print surname in full
    printf("%s\n", name + lastStart);

    return 0;
}
