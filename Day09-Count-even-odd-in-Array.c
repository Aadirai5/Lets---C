#include <stdio.h>
int main(){

    int array[5] = {10,15,30,40,50};
    int even = 0;
    int odd = 0;

    for (int i = 0; i <= 4; i++)
    {
        if (array[i] % 2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    printf("The Even numbers are %d\n", even);
    printf("The odd numbers are %d", odd);
    
    return 0;
}