#include <stdio.h>
int main(){

    int a = 10;
    int *p = &a;

    printf("Value of a %d\n", a);
    printf("Value of Pointer %d\n", *p);
    return 0;
}