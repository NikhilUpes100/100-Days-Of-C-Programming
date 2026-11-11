#include <stdio.h>

int main(void)
{
    long long binary, digit, complement = 0;
    long long place = 1;
    int valid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    if (binary < 0)
    {
        valid = 0;
    }
    else if (binary == 0)
    {
        complement = 1;
    }
    else
    {
        while (binary > 0)
        {
            digit = binary % 10;

            if (digit != 0 && digit != 1)
            {
                valid = 0;
                break;
            }

            if (digit == 0)
                complement = complement + place;

            binary = binary / 10;
            place = place * 10;
        }
    }

    if (valid == 1)
        printf("1's Complement = %lld", complement);
    else
        printf("Invalid binary number!");

    return 0;
}
