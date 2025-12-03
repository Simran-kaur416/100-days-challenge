#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int arr1[m];
    for (int i = 0; i < m; i++) scanf("%d", &arr1[i]);

    scanf("%d", &n);
    int arr2[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) printf("%d ", arr1[i++]);
        else printf("%d ", arr2[j++]);
    }

    while (i < m) printf("%d ", arr1[i++]);
    while (j < n) printf("%d ", arr2[j++]);

    return 0;
}
