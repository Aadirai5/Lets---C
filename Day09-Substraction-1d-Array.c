#include <stdio.h>
int main(){
    int a[4]= {1,2,3,4};
    int b[4]= {5,6,7,8};
    int sub[4];

    for (int i = 0; i <=4; i++)
    {
        sub[i] = a[i]-b[i];
    }

    printf("The substraction of 1d Array is\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", sub[i]);
    }
    
    
    return 0;
}