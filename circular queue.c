#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Check if queue is full
int isFull() {
    return (front == (rear + 1) % SIZE);
}

// Check if queue is empty
int isEmpty() {
    return (front == -1);
}

// Enqueue operation
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    printf("%d enqueued to queue\n", value);
}

// Dequeue operation
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue\n");
        return;
    }

    int removed = queue[front];

    if (front == rear) {
        front = rear = -1; // Queue becomes empty
    } else {
        front = (front + 1) % SIZE;
    }

    printf("%d dequeued from queue\n", removed);
}

// Display queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Should be full here
    display();

    dequeue();
    dequeue();
    display();

    enqueue(60);
    enqueue(70); // Wraps around
    display();

    return 0;
}
