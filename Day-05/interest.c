#include <stdio.h>
#include <math.h>

int main(void)
{
    float principal, rate, time;
    float si, ci, amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (%%): ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    // Calculate Simple Interest
    si = (principal * rate * time) / 100;

    // Calculate Compound Interest (compounded annually)
    amount = principal * pow(1 + rate / 100, time);
    ci = amount - principal;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    printf("Total Amount with Compound Interest = %.2f\n", amount);

    return 0;
}
