#include <stdio.h>

int main(void) {
    int arr[100], n, x;
    int low, high, mid;
    int result = -1;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    // Binary Search
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("Index of ceil: %d\n", result);

    return 0;
}
