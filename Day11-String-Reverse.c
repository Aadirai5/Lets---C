#include <stdio.h>
#include<string.h>
int main(){

    char str[100];

    printf("Enter a String:");
    scanf("%s", str);

    strrev(str);

    printf("Reverse of String %s", str);
    return 0;
}