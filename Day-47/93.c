#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str1[100], str2[100];
    int count[26] = {0};
    int i, anagram = 1;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha((unsigned char)str1[i])) {
            char ch = tolower((unsigned char)str1[i]);
            count[ch - 'a']++;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha((unsigned char)str2[i])) {
            char ch = tolower((unsigned char)str2[i]);
            count[ch - 'a']--;
        }
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
