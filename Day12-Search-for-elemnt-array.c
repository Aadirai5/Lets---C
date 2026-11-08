#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int num, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &num);

    for (int i = 0; i < 5; i++) {
        if (a[i] == num) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found!");
    else
        printf("Element not found!");

    return 0;
}