
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int n, i, value, position = 1;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = malloc(sizeof(struct Node));

        printf("Enter value: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    temp = head;

    while (temp != NULL) {
        if (temp->data == value) {
            printf("Value found at position %d", position);
            return 0;
        }

        temp = temp->next;
        position++;
    }

    printf("Value not found");

    return 0;
}
