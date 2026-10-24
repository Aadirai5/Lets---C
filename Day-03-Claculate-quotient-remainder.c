// Calculate quotient and remainder.

#include <stdio.h>
int main(){

    int num1, num2, quotient, remainder;

    printf("Enter the Value of Number1:");
    scanf("%d", &num1);

    printf("Enter the Value of Number2:");
    scanf("%d", &num2);

    if (num2 != 0){

    quotient = num1/num2;
    remainder = num1%num2;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    }


    else
    {
    printf("Not divisible by Zero");
    }
    
    return 0;
}

