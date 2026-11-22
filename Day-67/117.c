#include <stdio.h>
int main(void) {
    int arr1[100], arr2[100], merged[200];
    int m, n;
    int i = 0, j = 0, k = 0;

    printf("Enter the size of first array: ");
    scanf("%d", &m);

    if (m <= 0 || m > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the first sorted array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the second sorted array: ");
    for (j = 0; j < n; j++) {
        scanf("%d", &arr2[j]);
    }

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}
