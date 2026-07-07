#include <stdio.h>

int main()
{
    int arr1[] = {10, 20, 30};
    int arr2[] = {40, 50, 60};

    int merged[6];
    int i, j = 0;

    // Copy first array
    for(i = 0; i < 3; i++)
    {
        merged[j] = arr1[i];
        j++;
    }

    // Copy second array
    for(i = 0; i < 3; i++)
    {
        merged[j] = arr2[i];
        j++;
    }

    printf("Merged Array: ");

    for(i = 0; i < 6; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
