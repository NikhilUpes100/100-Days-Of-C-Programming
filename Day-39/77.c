
#include <stdio.h>

int main(void) {
    int matrix[10][10];
    int n, i, j;
    int distinct = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Invalid matrix size!");
        return 0;
    }

    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0) {
            break;
        }
    }

    printf("Diagonal elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    if (distinct == 1) {
        printf("\nAll diagonal elements are distinct.");
    } else {
        printf("\nDiagonal elements are not distinct.");
    }

    return 0;
}
