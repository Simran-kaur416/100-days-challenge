#include <stdio.h>

int main() {
    int arr[1000], n = 0;

    // Read array until newline
    while (scanf("%d", &arr[n]) == 1) {
        if (getchar() == '\n') break;
        n++;
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n; i++) sum += arr[i];

    printf("%d\n", total - sum);
    return 0;
}
