#include <stdio.h>

int main() {
    int arr[200], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute total sum of array
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);   // leftmost pivot
            return 0;
        }

        leftSum += arr[i];
    }

    // No pivot found
    printf("-1\n");

    return 0;
}
