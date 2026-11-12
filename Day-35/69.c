
#include <stdio.h>

int main(void) {
    int arr[100], n, i;
    int largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Invalid array size! Enter at least 2 elements.");
        return 0;
    }

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    secondLargest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] < largest && 
                 (secondLargest == largest || arr[i] > secondLargest)) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == largest) {
        printf("Second largest distinct element does not exist.");
    } else {
        printf("Second largest element = %d", secondLargest);
    }

    return 0;
}
