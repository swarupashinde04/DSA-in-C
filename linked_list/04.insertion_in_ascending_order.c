//given array : 10 20 40 50  
//to add 30 between 20 and 40
  
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Creating the linked list
    struct Node *head, *second, *third, *fourth;
    struct Node *newNode, *temp;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // First node
    head->data = 10;
    head->next = second;

    // Second node
    second->data = 20;
    second->next = third;

    // Third node
    third->data = 40;
    third->next = fourth;

    // Fourth node
    fourth->data = 50;
    fourth->next = NULL;

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 30;

    // Traverse to the correct position
    temp = head;

    while (temp->next != NULL && temp->next->data < newNode->data)
    {
        temp = temp->next;
    }

    // Insert the new node
    newNode->next = temp->next;
    temp->next = newNode;

    // Display the linked list
    printf("Linked List after insertion:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
