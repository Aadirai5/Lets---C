#include <stdio.h>

int main() {

    int a = 10;

    int *p = &a;
    int **q = &p;

    **q = 50;

    printf("Value of a = %d", a);

    return 0;
}