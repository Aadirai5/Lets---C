#include <stdio.h>

void tower(int n, char source, char auxiliary, char destination) {

    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    tower(n - 1, source, destination, auxiliary);

    printf("Move disk %d from %c to %c\n", n, source, destination);

    tower(n - 1, auxiliary, source, destination);
}

int main() {
    int n = 3;

    tower(n, 'A', 'B', 'C');

    return 0;
}