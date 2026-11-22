
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d inserted\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("%d deleted\n", queue[front]);
        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}
