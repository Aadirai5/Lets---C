#include <stdio.h>
int main(){

    int a, b, temp;

    printf("Enter the a:");
    scanf("%d", &a);

    printf("Enter the b:");
    scanf("%d", &b);

    temp = a;
    a=b;
    b=temp;

    printf("A is %d\n", a);
    printf("B is %d\n", b);


    return 0;
}