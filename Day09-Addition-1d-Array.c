#include <stdio.h>

int main() {
    int a[4] = {1, 2, 3, 4};
    int b[4] = {5, 6, 7, 8};
    int sum[4];

    for(int i = 0; i < 4; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("Sum of matrices:\n");

    for(int i = 0; i < 4; i++) {
        printf("%d ", sum[i]);

        
    }

    return 0;
}