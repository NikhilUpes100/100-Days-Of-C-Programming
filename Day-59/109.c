#include <stdio.h>
int main(void) {
    int arr[100], n, k;
    int i;
    long long sum = 0, maxSum;

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

    printf("Enter the subarray size k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k.\n");
        return 1;
    }

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum subarray sum of size %d: %lld\n", k, maxSum);

    return 0;
}
