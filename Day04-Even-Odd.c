// Chek even or Odd

#include <stdio.h>
int main(){

    int num;
    printf("Enter the number :");
    scanf("%d", &num);

    if (num%2 == 0){
        printf("Its a even number %d", num);
    }
    else
    {
        printf("Its a odd number %d", num);
    }
    return 0;
}