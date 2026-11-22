#include <stdio.h>
int main(void) {
    int arr[100];
    int freq[101] = {0};
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the array elements (0 to 100): ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] < 0 || arr[i] > 100) {
            printf("Invalid element.\n");
            return 1;
        }

        if (freq[arr[i]] == 1) {
            printf("Repeated element = %d\n", arr[i]);
            return 0;
        }

        freq[arr[i]]++;
    }

    return 0;
}
