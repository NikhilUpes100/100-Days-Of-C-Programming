#include <stdio.h>

int main(void)
{
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.");
    }
    else if (n == 0)
    {
        printf("Binary representation = 0");
    }
    else
    {
        while (n > 0)
        {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        printf("Binary representation = ");

        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", binary[i]);
        }
    }

    return 0;
}
