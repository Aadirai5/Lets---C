#include <stdio.h>
int main(){
    int num;
    int sum = 0;

    printf("Enter the Nth Number:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum+i;
    }
    printf("Sum is %d\n", sum);
    return 0;
}