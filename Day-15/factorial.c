#include <stdio.h>

int main(void)
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of a negative number is not defined.");
    }
    else if (n > 20)
    {
        printf("Number is too large to calculate using unsigned long long.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
