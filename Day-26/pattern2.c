
#include <stdio.h>

int main(void)
{
    int i, j;
    int stars[] = {1, 3, 5, 3, 1};

    for (i = 0; i < 5; i++) {

        for (j = 1; j <= stars[i]; j++) {
            printf("*\n");
        }

        if (i != 4) {
            printf("\n");
        }
    }

    return 0;
}

