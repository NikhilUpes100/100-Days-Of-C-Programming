#include <stdio.h>
int main(void) {
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", name);

        printf("Roll Number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("\nName: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}
