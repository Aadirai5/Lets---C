#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));

    *ptr = 100;

    printf("%d", *ptr);

    // Missing free()

    return 0;
}