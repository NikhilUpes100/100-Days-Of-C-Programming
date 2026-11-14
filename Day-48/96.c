#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int i, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0') {

        while (str[i] != '\0' && isspace((unsigned char)str[i])) {
            i++;
        }

        start = i;

        while (str[i] != '\0' && !isspace((unsigned char)str[i])) {
            i++;
        }

        end = i - 1;

        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("Sentence after reversing each word: %s", str);

    return 0;
}
