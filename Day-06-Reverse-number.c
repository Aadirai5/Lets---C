
#include <stdio.h>

int main() {
    int num, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}
