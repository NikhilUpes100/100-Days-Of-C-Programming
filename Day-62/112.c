#include <stdio.h>
int main(void) {
    int arr[100], n;
    int i;
    int currentSum, maxSum;

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

    currentSum = arr[0];
    maxSum = arr[0];

    for (i = 1; i < n; i++) {

        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum subarray sum = %d\n", maxSum);

    return 0;
}
