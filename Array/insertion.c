//It is the process of adding a new element to the array at a specific position.

//Case1: Inserting an element at the end of the array
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40};
    int size = 4; // current size of the array
    arr[size] = 50; // inserting 50 at the end of the array
    size++; // increment the size
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}