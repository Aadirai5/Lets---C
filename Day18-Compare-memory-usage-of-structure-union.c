#include <stdio.h>

struct Student {
    int a;
    float b;
    char c;
};

union Data {
    int a;
    float b;
    char c;
};

int main() {

    struct Student s;
    union Data u;

    printf("Structure Memory: %zu bytes\n", sizeof(s));

    printf("Union Memory: %zu bytes\n", sizeof(u));

    return 0;
}