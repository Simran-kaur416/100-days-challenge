#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    long long sum = 0;
    int count = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        perror("Error opening numbers.txt");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", average);
    }

    return 0;
}
