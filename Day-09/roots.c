#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a quadratic equation\n");
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);

            printf("Roots are real and distinct\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (d == 0)
        {
            root1 = -b / (2 * a);

            printf("Roots are real and equal\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        }
        else
        {
            printf("Roots are complex and imaginary\n");
            printf("Real part = %.2f\n", -b / (2 * a));
            printf("Imaginary part = %.2f\n",
                   sqrt(-d) / (2 * fabs(a)));
        }
    }

    return 0;
}
