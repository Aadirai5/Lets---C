#include <stdio.h>
int main(){

    int a[2][2] = {{10,20},{30,40}};
    int b[2][2] = {{50,60},{70,80}};
    int mult[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mult[i][j] = a[i][j] * b[i][j];
        }
        
    }

    printf("Multiplication of Matrix:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}