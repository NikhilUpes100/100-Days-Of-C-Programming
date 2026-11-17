#include <stdio.h>
int main() {
    int arr[100], n;
    int i, j, previousGreater;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
       printf("Invalid array size.\n");
       return 1;
    }

    printf("Enter the array elements:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements:");


    for (i = 0; i < n; i++) {
        previousGreater = -1;


    for (j = i - 1; j >= 0; j--) {
        if (arr[j] > arr[i]) {
           previousGreater = arr[j];
           break;
        }
    }


    if (i > 0) {
        printf(",");
    }

    printf("%d", previousGreater);
  }

  printf("\n");

 return 0;
}
