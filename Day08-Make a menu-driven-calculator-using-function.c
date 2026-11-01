#include <stdio.h>

int Add(int num1, int num2){
    return num1 + num2;
}

int Sub(int num1, int num2){
    return num1-num2;
}

int Mult(int num1, int num2){
    return num1*num2;
}

int Div(int num1, int num2){
    return num1/num2;
}
int main(){

    int num1, num2, choice;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the first number:");
    scanf("%d", &num2);

    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter the Choice:");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        printf("The addition of numbers %d:", Add(num1, num2));
        break;
    
    case 2:
        printf("The addition of numbers %d :", Sub(num1, num2));
        break;
    
    case 3:
        printf("The addition of numbers %d:", Mult(num1, num2));
        break;
    
    case 4:
        printf("The addition of numbers %d:", Div(num1, num2));
        break;
    
    default:
        printf("You are chutiya :");
        break;
    }
    return 0;
}