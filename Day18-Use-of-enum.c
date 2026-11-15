
#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    EXIT
};

int main() {

    int choice;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case ADD:
            printf("You selected Addition");
            break;

        case SUBTRACT:
            printf("You selected Subtraction");
            break;

        case MULTIPLY:
            printf("You selected Multiplication");
            break;

        case EXIT:
            printf("Exiting program");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
