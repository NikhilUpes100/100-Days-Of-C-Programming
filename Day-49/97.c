#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[100];
    int i, inWord = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {

        if (!isspace((unsigned char)name[i])) {
            if (inWord == 0) {
                printf("%c.", toupper((unsigned char)name[i]));
                inWord = 1;
            }
        }
        else {
            inWord = 0;
        }
    }

    printf("\n");

    return 0;
}
