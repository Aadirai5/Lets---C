#include <stdio.h>
int main(){

    int a = 10, b = 30;
    int *p = &a, *q = &b;
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("a = %d", a);
    printf("\nb = %d", b);


    return 0;
}