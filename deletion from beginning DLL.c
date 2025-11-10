#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Insert at the beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
}

// Delete from the beginning
void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;
    *head = temp->next;

    if (*head != NULL)
        (*head)->prev = NULL;

    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Display the list
void displayList(struct Node* head) {
    printf("List: ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
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

    deleteFromBeginning(&head);  // Deleting from empty list

    return 0;
}

