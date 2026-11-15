
#include <stdio.h>

int main() {

    FILE *fp;

    fp = fopen("student.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp, "\nAadi - 101 - ECE");
    fprintf(fp, "\nRahul - 102 - CSE");
    fprintf(fp, "\nAnu - 103 - ECE");

    fclose(fp);

    printf("New records added successfully!");

    return 0;
}
