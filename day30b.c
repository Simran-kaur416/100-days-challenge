#include <stdio.h>

int main() {
    int n, i, posCount = 0, negCount = 0, zeroCount = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    // Print results
    printf("Positive numbers count = %d\n", posCount);
    printf("Negative numbers count = %d\n", negCount);
    printf("Zero elements count = %d\n", zeroCount);

    return 0;
}
