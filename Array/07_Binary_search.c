// It is a searching algorithm that searches for an element in a sorted array by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

#include <stdio.h>

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int n = 7;

    int key = 50;

    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at index %d", mid);
            return 0;
        }

        else if(key > arr[mid])
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}
