#include <stdio.h>

int max(int num1, int num2, int num3){
    if (num1 >=num2 && num1 >= num3)
    {
        return num1;
    }

    else if (num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    else{
        return num3;
    }

}
int main(){

    int a , b, c;
    int result;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);

    result = ("%d", max(a, b, c));

    printf("The maximum number is: %d\n", result);

    return 0;
}