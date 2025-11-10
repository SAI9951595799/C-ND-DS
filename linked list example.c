#include <stdio.h>
#include <stdlib.h>  // Needed for malloc

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head;
    struct node *ds;
    // Correct memory allocation and casting
    head = (struct node *)malloc(sizeof(struct node));
    ds = (struct node *)malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    if(ds==NULL)
    {
    	printf("memory allocation failed\n");
    	return 1;
	}
    
    // Do not set head to NULL after allocation!
    head->data = 400;
    head->link = NULL;
    ds->data=200;    
    ds->link=NULL;
    
    printf("%d\n", head->data);
    printf("%d",ds->data);
    
    // Free allocated memory
    free(head);
    free(ds);
    
    return 0;
}

