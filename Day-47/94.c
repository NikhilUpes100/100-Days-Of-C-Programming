#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int i, start = 0, currentLength = 0;
    int longestStart = 0, longestLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] != '\0' && !isspace((unsigned char)str[i])) {
            if (currentLength == 0) {
                start = i;
            }
            currentLength++;
        }
        else {
            if (currentLength > longestLength) {
                longestLength = currentLength;
                longestStart = start;
            }

            currentLength = 0;

            if (str[i] == '\0') {
                break;
            }
        }
    }

    if (longestLength > 0) {
        printf("Longest word: %.*s\n", longestLength, str + longestStart);
        printf("Length of longest word: %d\n", longestLength);
    }
    else {
        printf("No word found.\n");
    }

    return 0;
}
