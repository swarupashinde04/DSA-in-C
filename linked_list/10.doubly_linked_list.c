# Doubly Linked List

## Definition
A Doubly Linked List is a linked list in which each node contains:
- Data
- Pointer to the previous node (`prev`)
- Pointer to the next node (`next`)

## Structure

```c
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
```

## Advantages
- Traversal is possible in both forward and backward directions.
- Deletion is easier when the previous node is needed.
- Useful for browser history, undo/redo, and music playlists.

## Disadvantages
- Requires extra memory for the `prev` pointer.
- Slightly more complex than a Singly Linked List.

## Time Complexity
Traversal: O(n)

## Space Complexity
O(1) Extra Space

#program : -

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
