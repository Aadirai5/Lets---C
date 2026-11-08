#include <stdio.h>
int main(){

    int a[5] = {10,20,30,40,50};
    int num;
    int found = 0;

    printf("Enter the Number:");
    scanf("%d", &num);

    for (int i = 0; i <5; i++)
    {
        if (a[i] == num)
        {
            found = 1;
            printf("Element found %d", a[i]);
            break;
        }
        
    }
    if (!found)
    {
        printf("Element Not found ");
    }
    
    return 0;
}