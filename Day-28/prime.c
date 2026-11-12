
#include <stdio.h>

int main(void)
{
    int n, i, j, count;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No prime numbers exist in this range.");
        return 0;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        count = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
