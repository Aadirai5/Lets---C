#include <stdio.h>
int main(){

    int num1;
    int num2;
    int num3;
    int sum;
    float average;

    printf("Enter the first Number :");
    scanf("%d", &num1);
    printf("Enter the second Number:");
    scanf("%d", &num2);
    printf("Enter the Third Number:");
    scanf("%d", &num3);

    sum = num1+num2+num3;
    average = (num1+num2+num3)/3;

    printf("Sum :%d\n", sum);
    printf("Average :%f\n", average);

    return 0;
}