#include <stdio.h>

int main() {
    int arr[200], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        // Extend the current subarray OR start new from current element
        if (maxEndingHere + arr[i] > arr[i])
            maxEndingHere = maxEndingHere + arr[i];
        else
            maxEndingHere = arr[i];

        // Update max so far
        if (maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    printf("%d\n", maxSoFar);

    return 0;
}
