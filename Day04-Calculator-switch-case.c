// Create a calculator using switch.


#include <stdio.h>
int main(){

    float a, b;
    int op;

    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the choice(+ = 1, - = 2, * = 3, /= 4):");
    scanf("%d", &op);

    printf("Enter the second number:");
    scanf("%f", &b);


    switch (op)
    {
    case 1 :
        printf("The addition of number is %f\n", a+b);
        break;
    
    case 2:
        printf("The addition of number is %f\n", a-b);
        break;

    case 3 :
        printf("The addition of number is %f\n", a*b);
        break;

    case 4 :
        printf("The addition of number is %f\n", a/b);
        break;
        
    default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}