
#include <stdio.h>

int main(void)
{
    int n, temp, digit, i;
    int sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number.");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n) {
        printf("%d is a Strong Number.", n);
    }
    else {
        printf("%d is not a Strong Number.", n);
    }

    return 0;
}
