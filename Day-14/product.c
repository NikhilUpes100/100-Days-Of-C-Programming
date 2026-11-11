#include <stdio.h>

int main(void)
{
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive number.");
    }
    else
    {
        for (i = 2; i <= n; i += 2)
        {
            product = product * i;
        }

        printf("Product of even numbers from 1 to %d = %lld", n, product);
    }

    return 0;
}
