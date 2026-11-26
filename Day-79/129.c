#include <stdio.h>
int main(void) {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;
    double average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Cannot open numbers.txt!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        average = (double)sum / count;

        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
