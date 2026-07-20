struct Node * head;
head = (struct Node*)malloc(sizeof(struct Node));
head->data = 10;
head->next = NULL;

//Why do we call this pointer head?
//It stores the address of the first node of the linked list, from which the entire list can be accessed. Any of these names would also work but head makes the code easy to understand.


//Connecting 2 nodes:
head = (struct Node*)malloc(sizeof(struct Node));
head->data = 10;
head->next = NULL;

//to connect second node:
head->next = second;
