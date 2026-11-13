#include <stdio.h>

int main(void) {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to search: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}

