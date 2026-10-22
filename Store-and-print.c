#include <stdio.h>
int main(){

    char name[10];
    int age;
    float marks;

    printf("Enter the Name of Student:");
    scanf("%s" ,&name);

    printf("Enter the Age of Student:");
    scanf("%d", &age);

    printf("Enter the Marks of Student :");
    scanf("%f", &marks);

    printf("Name :%s\n", name);
    printf("Age :%d\n", age);
    printf("Marks:%f\n", marks);

    return 0;
}