// Check whether a number is positive, negative, or zero.

#include <stdio.h>
int main(){

    int number;
    printf("Enter the number:");
    scanf("%d", &number);

    if (number > 0){
        printf("Its a positive number");
    }
    else if (number < 0)
    {
        printf("Its a negative number");
    }

    else
    {
        printf("Its a zero");
    }
    

    return 0;
}