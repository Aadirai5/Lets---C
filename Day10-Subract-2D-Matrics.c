#include<stdio.h>
int main(){

    int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int b[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int sub[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    
    }

    printf("The subtraction of 2D array\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}