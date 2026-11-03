#include <stdio.h>
int main(){

    int a[2][2] = {{10,20},{30,40}};
    int b[2][2] = {{10,50},{40,20}};
    int sum[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
        
    }
    printf("The Sum of 2D Array\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j= 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
        
    }
    
    return 0;
}