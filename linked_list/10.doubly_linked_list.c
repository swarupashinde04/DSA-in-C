#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    struct Node *head, *second, *third;
    struct Node *temp;

    // Create nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assign data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Link nodes
    head->prev = NULL;
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = NULL;

    // Forward Traversal
    printf("Forward Traversal:\n");

    temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    // Backward Traversal
    printf("Backward Traversal:\n");

    temp = third;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    return 0;
}