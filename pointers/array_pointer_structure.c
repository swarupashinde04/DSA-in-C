// Arrays and Pointers in C

int arr[5] = {1, 2, 3, 4, 5}; 
so, arr[0] = 1
    arr[1] = 2
    arr[2] = 3
    arr[3] = 4
    arr[4] = 5

    //IMP: arr = &arr[0] = address of first element of array

//Example: 
arr[5] = {1, 2, 3, 4, 5};
so, arr = address of 1
*arr = 1
arr[0] = 1
&arr[0] = address of 1

//shortcut:
normal array = pointer array
arr[0] = *(arr + 0)
arr[1] = *(arr + 1)
arr[2] = *(arr + 2)
arr[3] = *(arr + 3)

//Remember:
memory allocation :
char = 1 byte
int = 4 bytes  
float = 4 bytes
double = 8 bytes
structure = 8 bytes on 64 bit machine and 4 bytes on 32 bit machine

//Example:
struct Student
{
int roll;     //4 bytes
char grade;   //1 byte
};
//memory : 5 bytes
//IMP:
newNode = (struct Student *)malloc(sizeof(struct Student)); //dynamic memory allocation for structure
//this line actually creates the node in memory whereas,
struct Node *newNode;
//this line creates only pointer

//FINAL CODE:
struct Node *newNode;
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode -> data = 100;
newNode -> next = NULL;