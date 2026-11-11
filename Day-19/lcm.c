#include <stdio.h>

int main(void)
{
    int a, b, x, y, remainder, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0)
    {
        printf("LCM = 0");
    }
    else
    {
        if (a < 0)
            a = -a;

        if (b < 0)
            b = -b;

        x = a;
        y = b;

        while (y != 0)
        {
            remainder = x % y;
            x = y;
            y = remainder;
        }

        hcf = x;
        lcm = (a / hcf) * b;

        printf("LCM = %d", lcm);
    }

    return 0;
}
