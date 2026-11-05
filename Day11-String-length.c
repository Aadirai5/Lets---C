#include <stdio.h>
#include <string.h>
int main(){

    int str[90];

    printf("Enter the Charector:");
    scanf("%s", str);

    printf("The length of String is %d", strlen(str));
    return 0;
}