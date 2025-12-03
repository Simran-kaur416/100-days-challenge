#include <stdio.h>

int main() {
    int nums[1000], n = 0, target;

    // Input array until newline
    while (scanf("%d", &nums[n]) == 1) {
        if (getchar() == '\n') break;
        n++;
    }

    scanf("%d", &target);

    for (int i = 0; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}
