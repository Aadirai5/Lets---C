#include <stdio.h>
int main(){

    int a[5] = {10,30,50,20,40};
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }

    printf("Assending Order:");

   for (int  i = 0; i < 5; i++)
   {
    printf("%d ", a[i]);
   }
   

   printf("\nDsending Order:");
   for (int i = 4; i >= 0; i--)
   {
    printf("%d ", a[i]);
   }
   

    
    return 0;
}