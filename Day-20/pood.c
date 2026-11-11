#include <stdio.h>

int main(void)
{
    int n, digit, product = 1, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
            found = 1;
        }

        n = n / 10;
    }

    if (found == 1)
        printf("Product of odd digits = %d", product);
    else
        printf("No odd digits found.");

    return 0;
}
