#include <stdio.h>
int main(void) {
    int arr[100], n;
    int i, j, nextGreater;

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

    printf("Next Greater Elements: ");

    for (i = 0; i < n; i++) {
        nextGreater = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(", ");
        }

        printf("%d", nextGreater);
    }

    printf("\n");

    return 0;
}
