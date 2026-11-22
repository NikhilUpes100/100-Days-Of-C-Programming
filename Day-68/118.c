#include <stdio.h>
int main(void) {
    int arr[100], n;
    int i;
    long long expectedSum, actualSum = 0;
    int missing;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    expectedSum = (long long)n * (n + 1) / 2;

    missing = (int)(expectedSum - actualSum);

    printf("Missing number = %d\n", missing);

    return 0;
}
