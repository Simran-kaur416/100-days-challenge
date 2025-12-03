#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Total number of diagonals = rows + cols - 1
    for (int d = 0; d < rows + cols - 1; d++) {

        // Starting row for this diagonal
        int r = (d < cols) ? 0 : d - cols + 1;

        // Starting column for this diagonal
        int c = (d < cols) ? d : cols - 1;

        // Traverse this diagonal
        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }

        printf("\n");  // next diagonal
    }

    return 0;
}
