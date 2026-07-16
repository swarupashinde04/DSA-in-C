// Key Points

//- Structure is a user-defined data type.
//- It stores different types of data under one name.
//- Members are accessed using the dot (.) operator.
//- Memory is allocated only when a structure variable is created.
//- Arrays store same data types, whereas structures store different data types.
//- Arrays of structures are used to store multiple records.
//- Structures improve code organization and readability.

//syntax of structure:
struct structure_name {
    data_type member1;
    data_type member2;
    ...
    data_type memberN;
};

//creating variable of structure:
//1:
struct Student{
    int roll;
    char name[20];
    float cgpa;
};
//2:
struct Student{
    int roll;
    char name[20];
    float cgpa;
} s1, s2;

//accessing members of structure:
//we use the dot (.) operator to access the members of a structure variable. For example, if we have a structure variable `s1` of type `Student`, we can access its members as follows:
s1.roll = 101;
s1.cgpa = 8.5;

//NOTE: memory allocates when the structure variable is created not when the structure is declared.

//array of structures:
struct Student students[10]; // creates an array of 10 Student structures

//example: 
#include <stdio.h>

struct Student
{
    int roll;
    float cgpa;
};

int main()
{
    struct Student s[3];

    s[0].roll = 101;
    s[0].cgpa = 8.9;

    s[1].roll = 102;
    s[1].cgpa = 9.1;

    s[2].roll = 103;
    s[2].cgpa = 8.7;

    for(int i = 0; i < 3; i++)
    {
        printf("Roll = %d\n", s[i].roll);
        printf("CGPA = %.1f\n\n", s[i].cgpa);
    }

    return 0;
}

//structure initialization:
struct Student s1 = {101, 8.5}; // initializes roll to 101 and cgpa to 8.5.
//we can assign values while creating the structure.
struct Student{
    int roll;
    int cgpa;
};
struct Student s1 = {101,8.5};
