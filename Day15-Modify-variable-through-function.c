#include <stdio.h>

void change(int *p) {
    *p = 100;
}

int main() {

    int a = 10;

    printf("Before: %d\n", a);

    change(&a);

    printf("After: %d\n", a);

    return 0;
}
