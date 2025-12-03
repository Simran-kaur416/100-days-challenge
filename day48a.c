#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200], temp[400];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove newline characters
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // If lengths differ, cannot be rotation
    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation (lengths differ).\n");
        return 0;
    }

    // Create concatenated string s1+s1
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    if (strstr(temp, s2) != NULL)
        printf("The strings ARE rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");

    return 0;
}
