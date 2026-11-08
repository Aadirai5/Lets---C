#include <stdio.h>

int main() {
    int a[5] = {10, 50, 30, 40, 20};
    int largest = a[0];
    int second = -1;

    for (int i = 0; i < 5; i++) {

        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second Largest Element: %d", second);

    return 0;
}