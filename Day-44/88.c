
#include <stdio.h>

int main(void) {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("String after replacement: %s", str);

    return 0;
}
