#include <stdio.h>
int main(){

    int number1, number2, number3;

    printf("Enter the number 1:");
    scanf("%d", &number1);
    printf("Enter the number 2:");
    scanf("%d", &number2);
    printf("Enter the number 3:");
    scanf("%d", &number3);

    if (number1 > number2 && number1 > number3){
        printf("Number 1 is largest %d\n", number1);
    }
    else if (number2 > number1 && number2 >number1)
    {
        printf("NUmber 2 is largest %d\n", number2);
    }

    else{
        printf("Number 3 is largest %d\n", number3);
    }
    
    return 0;
}