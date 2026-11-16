#include <stdio.h>
int main(){

    int num;
    printf("Enter the number");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("Its a Odd Number");
    }
    else{
        printf("Its a Even Number");
    }
    
    return 0;
}