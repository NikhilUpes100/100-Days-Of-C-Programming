#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive number.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
