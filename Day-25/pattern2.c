
#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 1; i <= 5; i++) {

        // Print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 5; k >= i; k--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
