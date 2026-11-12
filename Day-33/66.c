
#include <stdio.h>

int main(void) {
    int arr[100], n, element, i, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("Invalid array size!");
        return 0;
    }

    printf("Enter the elements in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    pos = 0;
    while (pos < n && arr[pos] < element) {
        pos++;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
