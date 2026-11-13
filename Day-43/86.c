
#include <stdio.h>

int main(void) {
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("The string is a palindrome.");
    } else {
        printf("The string is not a palindrome.");
    }

    return 0;
}
