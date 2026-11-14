#include <stdio.h>
int main(void) {
    int nums[100], n;
    int i, candidate, count = 0;
    int frequency = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            frequency++;
        }
    }

    if (frequency > n / 2) {
        printf("Majority element: %d\n", candidate);
    }
    else {
        printf("Majority element: -1\n");
    }

    return 0;
}
