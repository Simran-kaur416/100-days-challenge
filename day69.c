#include <stdio.h>

int main() {
    int arr[1000], n = 0;

    // Input until newline
    while (scanf("%d", &arr[n]) == 1) {
        if (getchar() == '\n') break;
        n++;
    }

    int seen[10000] = {0};  // frequency array

    for (int i = 0; i <= n; i++) {
        if (seen[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    return 0;
}
