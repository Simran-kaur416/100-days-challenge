#include <stdio.h>

int main() {
    char name[200];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first initial
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c. ", name[0]);
    }

    // Print initials after spaces
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n') {
            printf("%c. ", name[i+1]);
        }
    }

    return 0;
}
