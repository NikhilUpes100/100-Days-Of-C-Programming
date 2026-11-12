#include <stdio.h>

int main(void)
{
    int i, j;

    // Upper half of the pattern
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
