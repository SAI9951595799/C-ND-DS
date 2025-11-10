#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the beginning in circular linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*head == NULL) {
        newNode->next = newNode;  // Circular link to itself
        *head = newNode;
    } else {
        struct Node* temp = *head;
        // Traverse to last node
        while (temp->next != *head)
            temp = temp->next;

        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;
    }
}

// Function to delete from the beginning in circular linked list
void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;

    // Only one node case
    if (temp->next == *head) {
        printf("Deleted node with data: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    // More than one node
    struct Node* last = *head;
    while (last->next != *head)
        last = last->next;

    last->next = temp->next;
    *head = temp->next;
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Function to display the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    // Insert at beginning
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    printf("Original ");
    displayList(head);

    // Delete from beginning
    deleteFromBeginning(&head);
    displayList(head);

    deleteFromBeginning(&head);
    displayList(head);

    deleteFromBeginning(&head);
    displayList(head);

    deleteFromBeginning(&head);  // Trying to delete from empty list

    return 0;
}

