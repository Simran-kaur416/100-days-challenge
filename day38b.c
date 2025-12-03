#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int isSymmetric = 1;  // Assume symmetric

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // A non-square matrix cannot be symmetric
    if (rows != cols) {
        printf("Matrix is not symmetric (not a square matrix).\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix[i][j] == matrix[j][i]
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
