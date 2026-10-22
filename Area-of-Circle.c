#include <stdio.h>
int main(){

    float Radious, Area;

    printf("Enter the Radious of Circle:");
    scanf("%f", &Radious);

    Area=(3.14*Radious*Radious);

    printf("Area of Circle %0.2f\n:", Area);

    return 0;
}