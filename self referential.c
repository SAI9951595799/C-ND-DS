#include <stdio.h>
#include <stdlib.h>

// Define a self-referential structure
struct Node {
    int data;
    struct Node *next;  // Pointer to the same type (self-reference)
};

int main() {
    // Creating two nodes
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));

    // Assigning data to the nodes
    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = NULL;  // Last node points to NULL

    // Traversing and printing
    struct Node *ptr = n1;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

    // Free memory
    free(n1);
    free(n2);

    return 0;
}

