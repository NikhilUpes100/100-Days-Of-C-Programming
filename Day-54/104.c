#include <stdio.h>
#include <math.h>

int main(void) {
    int n, x;
    int totalSum, leftSum, rightSum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum from 1 to n
    totalSum = n * (n + 1) / 2;

    // Calculate the pivot integer
    x = (int)sqrt(totalSum);

    // Calculate left and right sums
    leftSum = x * (x + 1) / 2;
    rightSum = totalSum - (x * (x - 1) / 2);

    if (x * x == totalSum && leftSum == rightSum) {
        printf("Pivot integer: %d\n", x);
    }
    else {
        printf("Pivot integer: -1\n");
    }

    return 0;
}
