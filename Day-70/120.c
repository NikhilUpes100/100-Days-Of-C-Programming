#include <stdio.h>
int main(void) {
    char str[1000];
    int i;
    int newWord = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        if (str[i] == ' ' || str[i] == '\t') {
            newWord = 1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            if (newWord == 1) {
                str[i] = str[i] - 32;
            }
            newWord = 0;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (newWord == 0) {
                str[i] = str[i] + 32;
            }
            newWord = 0;
        }
    }

    printf("%s", str);

    return 0;
}

