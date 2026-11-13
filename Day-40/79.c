
#include <stdio.h>

int main(void) {
    int matrix[10][10];
    int rows, cols, i, j, d;

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

    printf("Diagonal traversal:\n");

    for (d = 0; d < rows + cols - 1; d++) {
        for (i = 0; i < rows; i++) {
            j = d - i;

            if (j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
