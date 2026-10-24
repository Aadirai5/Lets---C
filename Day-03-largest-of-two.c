//Find the largest of two numbers using the conditional operator.

#include <stdio.h>
int main(){

    int number1, number2;

    printf("Enter the first number:");
    scanf("%d", &number1);
    printf("Enter the Second number:");
    scanf("%d", &number2);

    if (number1 > number2){
        printf("Number 1 is largest %d:", number1);
    }

    else{
        printf("Number 2 is largest %d", number2);
    }
    
    return 0;
}