// time complixity represents how many times a statement is executed in a program.

//Examples:
//1:
for (int i=0; i<n; i++) 
{
    printf("%d", i);
}
//time complexity = O(n)

//2:
for (int i=0; i<n; i++) 
{
    for (int j=0; j<n; j++) 
    {
        printf("%d", i);
    }
}
//time complexity = O(n^2)

//3:
for (int i=0; i<n; i++) 
{
}
for (int j=0; j<n; j++) 
{  
}
//time complexity = O(n) + O(n) = O(2n) = O(n)

//4:
for (int i=0; i<100; i++) 
{
}
//time complexity = O(1)

//5:
for (int i=0; i<2*n; i++) 
{
}
//time complexity = O(2n) = O(n)

//6:
int a=10;
//time complexity = O(1)

//7:
int arr[n];
//time complexity = O(1)

//8:
int arr[100];
//time complexity = O(1)
