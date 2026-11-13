
#include <stdio.h>

int main(void) {
    int matrix[10][10];
    int n, i, j, sum = 0;

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
        sum += matrix[i][i];
    }

    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
