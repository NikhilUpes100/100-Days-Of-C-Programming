#include <stdio.h>

int main(void)
{
    int n, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
