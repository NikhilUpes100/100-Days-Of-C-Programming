#include <stdio.h>
int main(void) {
    char s[1000];
    int lastSeen[256];
    int i, start = 0;
    int maxLength = 0;
    int length = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    while (s[length] != '\0' && s[length] != '\n') {
        length++;
    }

    for (i = 0; i < length; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (lastSeen[ch] >= start) {
            start = lastSeen[ch] + 1;
        }

        lastSeen[ch] = i;

        if (i - start + 1 > maxLength) {
            maxLength = i - start + 1;
        }
    }

    printf("Length of longest substring = %d\n", maxLength);

    return 0;
}
