#include <stdio.h>
int main(){

    char str[100];
    int i = 0;

    printf("Enter the Charector:");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        i++;
    }
    

    printf("Length of String %d", i);
    return 0;
}