#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char srcName[256], destName[256];
    FILE *src, *dest;
    int ch;  // fgetc returns int

    printf("Enter source file name: ");
    if (scanf("%255s", srcName) != 1) {
        fprintf(stderr, "Error reading source file name.\n");
        return 1;
    }

    printf("Enter destination file name: ");
    if (scanf("%255s", destName) != 1) {
        fprintf(stderr, "Error reading destination file name.\n");
        return 1;
    }

    // Open source file in read mode
    src = fopen(srcName, "r");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destName, "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    // Copy contents using fgetc and fputc
    while ((ch = fgetc(src)) != EOF) {
        if (fputc(ch, dest) == EOF) {
            perror("Error writing to destination file");
            fclose(src);
            fclose(dest);
            return 1;
        }
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}
