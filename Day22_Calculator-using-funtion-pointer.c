#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 20, b = 10;
    int choice;

    int (*ptr)(int, int);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        ptr = add;
    else if(choice == 2)
        ptr = subtract;
    else if(choice == 3)
        ptr = multiply;
    else
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Result = %d", ptr(a, b));

    return 0;
}