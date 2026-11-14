#include <stdio.h>

int main(void) {
    char str[100];
    int seen[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            if (seen[index] == 1) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }

            seen[index] = 1;
        }
    }

    if (found == 0) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
