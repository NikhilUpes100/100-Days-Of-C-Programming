#include <stdio.h>

int main(void) {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0;
    int isRotation = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Calculate lengths and remove newline characters
    while (str1[len1] != '\0' && str1[len1] != '\n') {
        len1++;
    }
    str1[len1] = '\0';

    while (str2[len2] != '\0' && str2[len2] != '\n') {
        len2++;
    }
    str2[len2] = '\0';

    if (len1 == len2) {
        if (len1 == 0) {
            isRotation = 1;
        }

        for (i = 0; i < len1 && !isRotation; i++) {
            for (j = 0; j < len1; j++) {
                if (str1[(i + j) % len1] != str2[j]) {
                    break;
                }
            }

            if (j == len1) {
                isRotation = 1;
            }
        }
    }

    if (isRotation) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}
