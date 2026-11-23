
#include <stdio.h>
#include <string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch) {
    if (top < SIZE - 1) {
        stack[++top] = ch;
    }
}

char pop() {
    if (top == -1) {
        return '\0';
    }

    return stack[top--];
}

int main() {

    char str[SIZE];

    printf("Enter a string: ");
    fgets(str, SIZE, stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    // Push characters
    for (int i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    // Pop characters
    printf("Reversed string: ");

    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}
