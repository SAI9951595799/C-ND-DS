#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

// Function to check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Enqueue operation
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full!\n");
    } else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("%d inserted into queue.\n", value);
    }
}

// Dequeue operation
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);
        front++;
    }
}

// Display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        int i;
        for ( i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int choice, value;
    while (1) {
        printf("\n--- Queue Operations ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}

