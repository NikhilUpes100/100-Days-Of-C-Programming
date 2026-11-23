#include <stdio.h>
int main(void) {
    FILE *fp;
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = '\n';

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        }

        lastChar = ch;
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);

    return 0;
}
