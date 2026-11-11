#include <stdio.h>

int main(void)
{
    int n, original, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    if (n < 0)
    {
        printf("Negative numbers are not considered palindromes.");
    }
    else
    {
        while (n != 0)
        {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n = n / 10;
        }

        if (original == reverse)
        {
            printf("%d is a Palindrome Number.", original);
        }
        else
        {
            printf("%d is not a Palindrome Number.", original);
        }
    }

    return 0;
}
