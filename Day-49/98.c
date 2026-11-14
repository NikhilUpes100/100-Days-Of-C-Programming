#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[100];
    char *words[50];
    char *token;
    int count = 0, i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Split the name into individual words
    token = strtok(name, " \t\n");

    while (token != NULL && count < 50) {
        words[count] = token;
        count++;
        token = strtok(NULL, " \t\n");
    }

    if (count == 0) {
        printf("No name entered.\n");
        return 0;
    }

    printf("Formatted name: ");

    // Print initials of all words except the surname
    for (i = 0; i < count - 1; i++) {
        printf("%c. ", toupper((unsigned char)words[i][0]));
    }

    // Print the surname in full
    printf("%s\n", words[count - 1]);

    return 0;
}
