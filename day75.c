#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[256];
    char text[1024];
    FILE *fp;

    printf("Enter the file name: ");
    if (scanf("%255s", filename) != 1) {
        fprintf(stderr, "Error reading filename.\n");
        return 1;
    }

    // Clear leftover newline from buffer before fgets()
    getchar();

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Enter the line to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fputs(text, fp);

    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}
