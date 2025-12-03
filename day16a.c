#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary representation = ");
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit) {
            for (int j = i; j >= 0; j--) {
                printf("%d", (num >> j) & 1);
            }
            break;
        }
    }
    printf("\n");

    return 0;
}
