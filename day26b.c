#include <stdio.h>

int main() {
    int groups[] = {1, 2, 5, 3, 1};  // number of stars in each group
    int n = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        if (i != n - 1) {  // print blank line between groups
            printf("\n");
        }
    }

    return 0;
}
