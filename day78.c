#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {  // Check if it's a letter
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
