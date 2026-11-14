#include <stdio.h>

int main(void) {
    char str[100];
    int i, j, k, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate string length (excluding newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("All substrings are:\n");

    // Generate all substrings
    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
