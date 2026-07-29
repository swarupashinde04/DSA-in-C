# Circular Linked List

## Definition
A Circular Linked List is a linked list in which the last node points back to the first node (head) instead of NULL.

## Characteristics
- Last node points to the first node.
- There is no NULL at the end.
- Nodes form a circle.

## Traversal
Since there is no NULL, traversal is done using:

```c
temp = head;

do
{
    // Process node
    temp = temp->next;
}
while(temp != head);

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *second, *third, *fourth;
    struct Node *temp;

    // Create Nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Assign Data
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    // Connect Nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Last node points to Head
    fourth->next = head;

    // Traversal
    temp = head;

    printf("Circular Linked List:\n");

    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    while (temp != head);

    printf("(Back to Head)");

    return 0;
}
