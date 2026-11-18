#include <stdio.h>

#define DEBUG

int main()
{
    int a = 10, b = 20;
    int sum = a + b;

    #ifdef DEBUG
        printf("Debug: a = %d\n", a);
        printf("Debug: b = %d\n", b);
    #endif

    printf("Sum = %d\n", sum);

    return 0;
}