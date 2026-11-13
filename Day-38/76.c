
#include <stdio.h>

int main(void) {
    int matrix[10][10];
    int rows, cols, i, j;
    int symmetric = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || rows > 10 || cols <= 0 || cols > 10) {
        printf("Invalid matrix size!");
        return 0;
    }

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows != cols) {
        symmetric = 0;
    } else {
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0) {
                break;
            }
        }
    }

    if (symmetric == 1) {
        printf("The matrix is symmetric.");
    } else {
        printf("The matrix is not symmetric.");
    }

    return 0;
}
