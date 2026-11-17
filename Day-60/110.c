#include <stdio.h>

int main(void) {
    int arr[100], n, k;
    int i, j, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the window size k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k.\n");
        return 1;
    }

    printf("Maximum elements in each window: ");

    for (i = 0; i <= n - k; i++) {

        max = arr[i];

        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    printf("\n");

    return 0;
}
