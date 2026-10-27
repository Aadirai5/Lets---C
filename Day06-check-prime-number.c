// Check whether a number is prime.

#include <stdio.h>
int main(){

    int num, i, isprime=1;

    printf("Enter a number:");
    scanf("%d", &num);

    if (num <=1)
    {
        isprime = 0;
    }
    else{
        for (int i = 2; i < num; i++)
        {
            if (num %i==0)
            {
                isprime = 0;
                break;
            }
            
        }
        
    }
    if (isprime==1)
    {
        printf("It is a prime number:");
    }
    else{
        printf("It is not a prime Number:");
    }
    
    return 0;
}