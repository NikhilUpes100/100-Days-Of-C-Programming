#include <stdio.h>

int main(void)
{
    int days, fine;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days < 0)
    {
        printf("Invalid number of days!");
    }
    else if (days == 0)
    {
        printf("No fine.");
    }
    else if (days <= 5)
    {
        fine = days * 2;
        printf("Library Fine = Rs. %d", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Library Fine = Rs. %d", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Library Fine = Rs. %d", fine);
    }
    else
    {
        printf("Membership Cancelled.");
    }

    return 0;
}
