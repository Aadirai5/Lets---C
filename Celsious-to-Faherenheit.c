#include <stdio.h>
int main() {
    float C, F;

    printf("Enter Celsius: ");
    scanf("%f", &C);

    F = (C * 9.0 / 5.0) + 32;

    printf("Fahrenheit = %.2f\n", F);

    return 0;
}
