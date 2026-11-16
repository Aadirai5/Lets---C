
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student s;
    FILE *fp;
    int n, i;

    // Save student records
    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        printf("\nEnter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter name: ");
        scanf("%49s", s.name);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%d %s %.2f\n",
                s.roll, s.name, s.marks);
    }

    fclose(fp);

    printf("\nRecords saved successfully!\n");

    // Retrieve student records
    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%d %49s %f",
    &s.roll, s.name, &s.marks) == 3) {

        printf("\nRoll: %d", s.roll);
        printf("\nName: %s", s.name);
        printf("\nMarks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}
