#include <stdio.h>

int main() {
    int arr[200], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements:\n");

    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Look to the left of i for nearest greater element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;  // nearest greater found
            }
        }

        // Print with comma separation
        if (i == n - 1)
            printf("%d", prevGreater);      // no comma after last
        else
            printf("%d, ", prevGreater);
    }

    printf("\n");
    return 0;
}
