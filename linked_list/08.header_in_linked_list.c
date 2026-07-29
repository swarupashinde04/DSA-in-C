# Header Linked List

## Definition
A Header Linked List is a linked list that contains an extra node called the **Header Node** before the first data node.

## Purpose
- Simplifies insertion and deletion operations.
- Makes handling an empty linked list easier.
- Can store useful information such as the number of nodes.

## Advantages
- Easy insertion and deletion.
- Permanent starting node.
- Can store metadata.

## Disadvantage
- Requires one extra node.

## Time Complexity
Traversal : O(n)

## Space Complexity
O(1) Extra Space



#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Create Header Node
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));

    // Create Data Nodes
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    // Header Node
    head->data = 3;          // Number of data nodes
    head->next = first;

    // First Node
    first->data = 10;
    first->next = second;

    // Second Node
    second->data = 20;
    second->next = third;

    // Third Node
    third->data = 30;
    third->next = NULL;

    // Display Header Information
    printf("Number of Nodes = %d\n\n", head->data);

    // Display Linked List
    struct Node *temp = head->next;

    printf("Linked List:\n");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
