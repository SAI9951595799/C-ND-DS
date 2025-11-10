#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;  // Global head pointer

// Function prototypes
void beginsert();
void lastinsert();
void randomsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

int main() {
    int choice = 0;
    
    while(choice != 9) {
        printf("\n\n********* Main Menu *********\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at a random position\n");
        printf("4. Delete from end\n");
        printf("5. Delete from a random position\n");
        printf("6. Display list\n");
        printf("7. Search\n");
        printf("8. Delete from beginning\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                beginsert();
                break;
            case 2:
                lastinsert();
                break;
            case 3:
                randomsert();
                break;
            case 4:
                last_delete();
                break;
            case 5:
                random_delete();
                break;
            case 6:
                display();
                break;
            case 7:
                search();
                break;
            case 8:
                begin_delete();
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    }
    
    return 0;
}

// Function to insert a node at the beginning of the list
void beginsert() {
    struct node *new_node;
    int value;
    
    new_node = (struct node *)malloc(sizeof(struct node));
    if(new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    
    printf("Enter the value to be inserted at the beginning: ");
    scanf("%d", &value);
    
    new_node->data = value;
    new_node->next = head;  // Link new node to the current head
    head = new_node;        // Update head to point to the new node
    
    printf("Node inserted at the beginning.\n");
}

// Function to insert a node at the end of the list
void lastinsert() {
    struct node *new_node, *temp;
    int value;
    
    new_node = (struct node *)malloc(sizeof(struct node));
    if(new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    
    printf("Enter the value to be inserted at the end: ");
    scanf("%d", &value);
    
    new_node->data = value;
    new_node->next = NULL;
    
    if(head == NULL) {
        head = new_node;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    
    printf("Node inserted at the end.\n");
}

// Function to insert a node at a given position in the list
void randomsert() {
    struct node *new_node, *temp;
    int value, pos, i;
    
    printf("Enter the position where you want to insert the node: ");
    scanf("%d", &pos);
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
    
    new_node = (struct node *)malloc(sizeof(struct node));
    if(new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    new_node->data = value;
    new_node->next = NULL;
    
    if(pos == 1) {  // Insert at the beginning
        new_node->next = head;
        head = new_node;
        printf("Node inserted at position 1.\n");
    } else {
        temp = head;
        // Traverse to the node just before the desired position
        for(i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if(temp == NULL) {
            printf("Position out of range. Node not inserted.\n");
            free(new_node);
        } else {
            new_node->next = temp->next;
            temp->next = new_node;
            printf("Node inserted at position %d.\n", pos);
        }
    }
}

// Function to delete a node from the beginning of the list
void begin_delete() {
    struct node *temp;
    
    if(head == NULL) {
        printf("List is empty. No node to delete.\n");
        return;
    }
    
    temp = head;
    head = head->next;
    printf("Deleted node from beginning with value: %d\n", temp->data);
    free(temp);
}

// Function to delete a node from the end of the list
void last_delete() {
    struct node *temp, *prev;
    
    if(head == NULL) {
        printf("List is empty. No node to delete.\n");
        return;
    }
    
    if(head->next == NULL) {  // Only one node in the list
        printf("Deleted node with value: %d\n", head->data);
        free(head);
        head = NULL;
    } else {
        temp = head;
        while(temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        printf("Deleted node with value: %d\n", temp->data);
        free(temp);
        prev->next = NULL;
    }
}

// Function to delete a node from a specified position in the list
void random_delete() {
    struct node *temp, *prev;
    int pos, i;
    
    if(head == NULL) {
        printf("List is empty. No node to delete.\n");
        return;
    }
    
    printf("Enter the position of the node to delete: ");
    scanf("%d", &pos);
    
    if(pos == 1) {  // Delete from beginning
        temp = head;
        head = head->next;
        printf("Deleted node with value: %d\n", temp->data);
        free(temp);
    } else {
        temp = head;
        for(i = 1; i < pos && temp != NULL; i++) {
            prev = temp;
            temp = temp->next;
        }
        if(temp == NULL) {
            printf("Position out of range. No node deleted.\n");
        } else {
            prev->next = temp->next;
            printf("Deleted node with value: %d\n", temp->data);
            free(temp);
        }
    }
}

// Function to display the entire linked list
void display() {
    struct node *temp = head;
    
    if(head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("Linked list elements: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to search for a value in the linked list
void search() {
    struct node *temp = head;
    int key, pos = 1;
    int found = 0;
    
    if(head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("Enter the value to search: ");
    scanf("%d", &key);
    
    while(temp != NULL) {
        if(temp->data == key) {
            printf("Value %d found at position %d.\n", key, pos);
            found = 1;
            // If you only want to find the first occurrence, uncomment the next line:
            // break;
        }
        pos++;
        temp = temp->next;
    }
    
    if(!found) {
        printf("Value %d not found in the list.\n", key);
    }
}

