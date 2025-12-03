#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Print results
    printf("Even numbers count = %d\n", evenCount);
    printf("Odd numbers count = %d\n", oddCount);

    return 0;
}
