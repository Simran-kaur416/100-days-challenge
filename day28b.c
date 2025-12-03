#include <stdio.h>

int main() {
    int n, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // declare array of size n

    // Read elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
