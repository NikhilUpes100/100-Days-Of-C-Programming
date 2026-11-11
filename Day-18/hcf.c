#include <stdio.h>

int main(void)
{
    int a, b, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0)
    {
        printf("HCF is not defined for 0 and 0.");
    }
    else
    {
        if (a < 0)
            a = -a;

        if (b < 0)
            b = -b;

        while (b != 0)
        {
            remainder = a % b;
            a = b;
            b = remainder;
        }

        printf("HCF (GCD) = %d", a);
    }

    return 0;
}
