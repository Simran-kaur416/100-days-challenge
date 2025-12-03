#include <stdio.h>

int main() {
    int arr[200], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements:\n");

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Brute force: check all elements to the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;  // nearest greater found
            }
        }

        // Print with comma separation
        if (i == n - 1)
            printf("%d", nextGreater);      // no comma after last
        else
            printf("%d, ", nextGreater);
    }

    printf("\n");
    return 0;
}
