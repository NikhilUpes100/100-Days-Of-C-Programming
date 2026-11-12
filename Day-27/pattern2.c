
#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Upper half
    for (i = 1; i <= 4; i++) {

        // Print spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) {

        // Print spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

