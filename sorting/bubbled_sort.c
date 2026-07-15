//it is a simple comparision based sorting algorithm which is used to sort the elements in the array in ascending order.

//swapped : this flag is used to detect wheter any exchange of elements occured during a pass. If no swaps occurred, the array is already sorted and we can terminate the algorithm early.It improves the best time complexity from O(n^2) to O(n) in the best case scenario when the array is already sorted.


//normal bubble sort:
#include <stdio.h>

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    printf("Original Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n\nSorted Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
//output:
// Original Array: 5 1 4 2 8
// Sorted Array: 1 2 4 5 8

//optimized bubble sort:

#include <stdio.h>

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    int swapped;

    printf("Original Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Optimized Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        swapped = 0;

        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;
            }
        }

        if(swapped == 0)
        {
            break;
        }
    }

    printf("\n\nSorted Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

//output:
// Original Array: 5 1 4 2 8
// Sorted Array: 1 2 4 5 8
