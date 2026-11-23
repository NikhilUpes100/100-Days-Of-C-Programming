#include <stdio.h>
int main(void) {
    FILE *fp;
    char text[1000];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    printf("Enter a line to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text successfully appended to info.txt\n");

    return 0;
}
