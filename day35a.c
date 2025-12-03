#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int largest = INT_MIN, second_largest = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements!\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find largest and second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
        printf("No second largest element (all elements may be equal).\n");
    else
        printf("Second largest element = %d\n", second_largest);

    return 0;
}
