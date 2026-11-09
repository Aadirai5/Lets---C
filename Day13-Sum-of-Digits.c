#include <stdio.h>
int Sum(n){
    if (n==0)
    {
        return 0;
    }

    return (n%10) + Sum(n/10);
    
}

int main(){

    int num;

    printf("Enter the Number:");
    scanf("%d", &num);
    printf("%d", Sum(num));
    return 0;
}