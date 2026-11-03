#include <stdio.h>
int main(){
    int a[2][2]={{10,20},{30,40}};
    int Trans[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            Trans[i][j] = a[j][i];
        }
        
    }
    
    printf("The Transpose of Given matrix is :\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", Trans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}