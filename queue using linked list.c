#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Queue front and rear pointers
struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue operation
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d enqueued to queue.\n", value);
}

// Dequeue operation
void dequeue() {
    if (front == NULL) {
        printf("Queue is empty. Nothing to dequeue.\n");
        return;
    }

    struct Node* temp = front;
    printf("%d dequeued from queue.\n", temp->data);

    front = front->next;

    // If queue becomes empty
    if (front == NULL)
        rear = NULL;

    free(temp);
}

// Display the queue
void display() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    dequeue();
    dequeue();
    dequeue(); // Extra dequeue to show empty case

    return 0;
}

