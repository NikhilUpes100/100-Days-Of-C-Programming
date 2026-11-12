
#include <stdio.h>

int main(void)
{
    int arr[100], n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element found at position %d.", i + 1);
            break;
        }
    }

    if (found == 0) {
        printf("Element not found in the array.");
    }

    return 0;
}
