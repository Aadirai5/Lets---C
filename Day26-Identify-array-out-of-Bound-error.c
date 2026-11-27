
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Wrong: accessing index 5
    // printf("%d", arr[5]);

    // Correct
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
