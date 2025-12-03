#include <stdio.h>

int main() {
    int nums[200], answer[200], prefix[200], suffix[200];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Build prefix product array
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Build suffix product array
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // answer[i] = product of prefix[i] * suffix[i]
    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    // Print output array
    printf("Answer array:\n");
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", answer[i]);
        else
            printf("%d, ", answer[i]);
    }

    printf("\n");
    return 0;
}
