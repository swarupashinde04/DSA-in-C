//Deletion is the process of removing an element from the array at a specific position.

//Case1: Deleting an element from the end of the array
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5; // current size of the array
    size--; // decrement the size to remove the last element
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

//Case2: Deleting an element from a specific position in the array
#include <stdio.h>
int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5; // current size of the array
    int pos = 2; // position to delete the element

    // Shift elements to the left to fill the gap
    for(int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // decrement the size

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

//Case3: Deleting an element from the beginning of the array
#include <stdio.h>
int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5; // current size of the array

    // Shift elements to the left to remove the first element
    for(int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // decrement the size

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
