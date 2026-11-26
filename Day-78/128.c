
#include <stdio.h>
int main(void) {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'A' ||
            ch == 'E' || ch == 'I' || ch == 'O' ||
            ch == 'U') {

            vowels++;
        }

        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z')) {

            consonants++;
        }
    }

    fclose(fp);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
