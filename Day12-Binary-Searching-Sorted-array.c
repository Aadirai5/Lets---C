#include <stdio.h>
int main(){
    int a[5] = {10,20,30,40,50};
    int low = 0;
    int high = 4;
    int mid, num;
    int found = 0;

    printf("Enter the Number:");
    scanf("%d", &num);

    while (low <=high)
    {
        mid = (low + high)/2;

        if (a[mid] == num)
        {
            found = 1;
            break;
        }

        else if (a[mid] < num)
        {
            low = mid +1;
        }
        else{
            high = mid-1;
        }
        
    }

    if (found)
    {
        printf("Element is found %d", mid);
    }
    else{
        printf("Element not found:");
    }
    
    
    return 0;
}