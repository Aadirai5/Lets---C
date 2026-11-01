#include <stdio.h>

int Add(int a, int b){
    return a + b;
}

int Mult(int a, int b){
    return a * b;
}

int main(){

    int num1, num2, result, result1;

    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the first number:");
    scanf("%d", &num2);

    result = Add(num1,num2);
    result1 = Mult(num1, num2);

    printf("Addition of number is %d\n", result);
    printf("Multiplication of number is %d\n", result1);
    
    return 0;
}