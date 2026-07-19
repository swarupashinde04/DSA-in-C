//it stores the address of a variable in memory. It is a variable that holds the memory address of another variable. Pointers are used for dynamic memory allocation, arrays, and functions. They allow for efficient manipulation of data and can be used to create complex data structures like linked lists and trees.

//Suppose: 
int a = 10; // a is an integer variable
so, a = value of a (10)
    &a = address of a
    ptr = &a = address of 10
    *ptr = value of a (10)

//change in the value of 'a' using pointer:
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    *ptr = 20; // changes the value of 'a' to 20
    printf("Value of a: %d\n", a);
    return 0;
}

int x = 10;
int y = 20;
 int *ptr = &x;
 p = &y;
 *ptr = *ptr + 5;
 //now, final x = 10
              y = 25
              *p = 25

