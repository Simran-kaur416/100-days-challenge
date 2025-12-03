#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[256];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Read and print until EOF
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}
