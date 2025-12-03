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

    // For each starting index of a window
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;   // default if no negative found

        // Scan the current window arr[i ... i+k-1]
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;      // first negative found, break
            }
        }

        printf("%d ", firstNeg);
    }

    printf("\n");
    return 0;
}
