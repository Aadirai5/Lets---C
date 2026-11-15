
#include <stdio.h>
#include <ctype.h>

int main() {

    FILE *fp;
    char ch;
    int lines = 0, words = 0;
    int inWord = 0;
    int hasContent = 0;
    int lastChar = '\n';

    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {

        hasContent = 1;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (isspace((unsigned char)ch)) {
            inWord = 0;
        }
        else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    if (hasContent && lastChar != '\n') {
        lines++;
    }

    printf("Total lines: %d\n", lines);
    printf("Total words: %d\n", words);

    fclose(fp);

    return 0;
}
