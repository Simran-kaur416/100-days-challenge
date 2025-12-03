#include <stdio.h>

int main() {
    int arr[200], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (window size): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    printf("Maximum elements for each window:\n");

    // For each starting index of window
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find max in current window arr[i ... i+k-1]
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
