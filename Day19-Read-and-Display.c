
#include <stdio.h>

int main() {

    FILE *fp;
    char ch;

    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
