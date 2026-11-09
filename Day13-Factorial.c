#include <stdio.h>
int main(){
    int num = 5;
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    printf("Factorail %d", fact);
    
    return 0;
}