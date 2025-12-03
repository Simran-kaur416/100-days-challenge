#include <stdio.h>

int main() {
    int arr[200], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (subarray size): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("-1\n");   // invalid case
        return 0;
    }

    // Compute sum of first window of size k
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window from index k to n-1
    for (int i = k; i < n; i++) {
        windowSum += arr[i];        // add new element
        windowSum -= arr[i - k];    // remove element going out of window

        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
