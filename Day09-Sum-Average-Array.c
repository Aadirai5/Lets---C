#include <stdio.h>
int main(){

    int arr[5] = {10,20,30,40,50};
    int sum = 0;
    float avg;

    for (int i = 0; i <=4; i++)
    {
        sum = sum+arr[i];
    }
    avg = sum/5.0;

    printf("The sum of Array: %d", sum);
    printf("The Average of Array: %.2f", avg);
    return 0;
}