#include <stdio.h>
int main(){
    int num;
    int factorial = 1;

    printf("Enter a Number:");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of negative number is not possible:");

    }
    else{
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial*i;
        }
        
        printf("Factorial of number is %d\n", factorial);

    }
    
    
    return 0;
}