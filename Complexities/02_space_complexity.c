// space complexity represents how much memory a program uses.

//Examples:
//1:
int a=10;
//space complexity = O(1)

//2:
int arr[n];
//space complexity = O(n)

//3:
for (int i=0; i<n; i++)
//space complexity = O(1)

//4:
for (int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
        printf("%d", i);
    }
}
//space complexity = O(1)

//5:
for (int i=0; i<n; i++)
{
}
for (int j=0; j<n; j++)
{
}
//space complexity = O(1) + O(1) = O(2) = O(1)

//6:
int arr[n];
//space complexity = O(n)

//7:
int x=10;
//space complexity = O(1)

//8:
int a;
int b;
int c;
//space complexity = O(1) + O(1) + O(1) = O(3) = O(1)

//9:
int matrix[n][n];
//space complexity = O(n^2)

//10:
int sum =0;
for(int i=0; i<n; i++)
{
    sum += i;
}
//space complexity = O(1)

//11:
int copy[n];
for(int i=0; i<n; i++)
{
    copy[i] = arr[i];
}
//space complexity = O(n)
