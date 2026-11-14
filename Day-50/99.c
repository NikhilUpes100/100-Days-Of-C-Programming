#include <stdio.h>

int main(void) {
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid date format.\n");
        return 1;
    }

    if (month == 4 && day >= 1 && day <= 30 && year > 0) {
        printf("Formatted date: %02d-Apr-%04d\n", day, year);
    }
    else {
        printf("Invalid date. Please enter a valid April date.\n");
    }

    return 0;
}
