
#include <stdio.h>

int main() {
    int num, position;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &position);

    if (num & (1 << position)) {
        printf("Bit is SET (1)");
    }
    else {
        printf("Bit is CLEAR (0)");
    }

    return 0;
}
