#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int a = 5, b = 10;

    printf("Square = %d\n", SQUARE(a));
    printf("Maximum = %d\n", MAX(a, b));

    return 0;
}