#include <stdio.h>

int main(void) {
    int arr[100], n;
    int i, totalSum = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {

        // Calculate right sum
        int rightSum = totalSum - leftSum - arr[i];

        // Check whether left sum equals right sum
        if (leftSum == rightSum) {
            pivot = i;
            break;
        }

        // Update left sum
        leftSum += arr[i];
    }

    printf("Pivot index: %d\n", pivot);

    return 0;
}
