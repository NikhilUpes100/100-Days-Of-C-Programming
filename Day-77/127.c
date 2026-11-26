#include <stdio.h>
int main(void) {
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");

    if (fp1 == NULL) {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    fp2 = fopen("output.txt", "w");

    if (fp2 == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {

        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }

        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File converted successfully!\n");

    return 0;
}
