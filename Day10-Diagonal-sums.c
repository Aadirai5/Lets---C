#include <stdio.h>
int main(){

    int a[3][3] ={{10,20,30},{40,50,60},{70,80,90}};
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 3; i++)
    {
        sum1 = sum1+ a[i][i];
        sum2 = sum2 + a[i][2-i];
    }
    
    printf("Primary Diagonal sum: %d\n", sum1);
    printf("Secondery Diagonal sum: %d\n", sum2);

    return 0;
}