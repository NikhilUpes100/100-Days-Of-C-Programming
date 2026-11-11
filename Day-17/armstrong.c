#include <stdio.h>

int main(void)
{
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    if (n < 0)
    {
        printf("Negative numbers are not Armstrong numbers.");
    }
    else
    {
        while (n != 0)
        {
            remainder = n % 10;
            sum = sum + (remainder * remainder * remainder);
            n = n / 10;
        }

        if (original == sum)
        {
            printf("%d is an Armstrong Number.", original);
        }
        else
        {
            printf("%d is not an Armstrong Number.", original);
        }
    }

    return 0;
}
