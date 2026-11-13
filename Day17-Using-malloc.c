#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Array of size %d created successfully!", n);

    free(arr);

    return 0;
}