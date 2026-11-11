#include <stdio.h>

int main(void)
{
    int n, first, last, temp, digits = 0;
    int divisor = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive number.");
        return 0;
    }

    if (n < 10)
    {
        printf("Number after swapping = %d", n);
        return 0;
    }

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;
    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
