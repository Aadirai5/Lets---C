
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, sum;

    if (argc != 3) {
        printf("Please provide two numbers.\n");
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    sum = a + b;

    printf("Sum = %d\n", sum);

    return 0;
}
