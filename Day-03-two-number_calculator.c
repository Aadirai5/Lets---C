#include <stdio.h>
int main(){

    int number1;
    int number2;
    float Addition, Substraction, Multiplication, Divison;

    printf("Enter the Number1:");
    scanf("%d", &number1);
    printf("Enter the Number2:");
    scanf("%d", &number2);

    Addition = (number1+number2);
    Substraction = number1-number2;
    Multiplication = number1*number2;
    Divison = number1/number2;

    printf("Addition: %0.2f\n", Addition);
    printf("Substraction: %0.2f\n", Substraction);
    printf("Multiplication: %0.3f\n", Multiplication);
    printf("Divison: %0.2f\n", Divison);


    return 0;
}