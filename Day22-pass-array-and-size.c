#include <stdio.h>

void display(int arr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    display(arr, size);

    return 0;
}