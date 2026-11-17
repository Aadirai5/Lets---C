
#include <stdio.h>

int main() {
    int num, position;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &position);

    num = num | (1 << position);

    printf("After setting bit: %d", num);

    return 0;
}
