
#include <stdio.h>

int main(void)
{
    int a[100], b[100], c[200];
    int n1, n2, i;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    if (n1 <= 0 || n1 > 100) {
        printf("Invalid array size.");
        return 0;
    }

    printf("Enter elements of first array:\n");

    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    if (n2 <= 0 || n2 > 100) {
        printf("Invalid array size.");
        return 0;
    }

    printf("Enter elements of second array:\n");

    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    for (i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    printf("Merged array:\n");

    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
