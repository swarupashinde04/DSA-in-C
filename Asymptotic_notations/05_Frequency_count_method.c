//It is a technique used to calculate the time complexity of an algorithm by counting how many times each statement executes.

//Examples :

//1:
int a =5;
int b = 10;
int c = a + b;
printf("%d", c);
//Total frequency count = 4 (1 for each statement) So, the time complexity is O(1).

//2:
for(int i=0;i<n;i++)
{
    printf("%d", i);
}
//Total frequency count = 3n+2 (1 for i=0, n+1 for i<n, n for i++ and n for printf) So, the time complexity is O(n).

//3:
for (i=1; i<n; i=i+2)
{
    printf("%d", i);
}
//Total frequency count = 3(n/2)+2 (1 for i=1, n/2+1 for i<n, n/2 for i=i+2 and n/2 for printf) So, the time complexity is O(n).

//4:
for (i=1; i<n; i=i*2)
{
    printf("%d", i);
}
//Total frequency count = 3(log2(n))+2 (1 for i=1, log2(n)+1 for i<n, log2(n) for i=i*2 and log2(n) for printf) So, the time complexity is O(log n).

//5:
for (i=0; i<n, i++)
{
    for (j=0; j<n; j++)
    {
        printf("%d", i+j);
    }
}
//Total frequency count = 3n^2 + 2n + 2 (1 for i=0, n+1 for i<n, n for i++, n for j=0, n(n+1) for j<n, n^2 for j++, and n^2 for printf) So, the time complexity is O(n^2).

//6:
for (int i=0; i<n; i++)
{
    printf("A");
}
for (int j=1; j<n; j*2)
{
    printf("B");
}
//Total frequency count = 3n + 2(log2(n)) + 4 (1 for i=0, n+1 for i<n, n for i++, n for printf, 1 for j=1, log2(n)+1 for j<n, log2(n) for j*2 and log2(n) for printf) So, the time complexity is O(n + log n).

//7:
p=0;
for(i=0; p<=n; i++)
{
    p = p + i;
    printf("%d", p);
}
//Total frequency count = 3(sqrt(2n)) + 2 (1 for p=0, sqrt(2n)+1 for p<=n, sqrt(2n) for p=p+i, and sqrt(2n) for printf) So, the time complexity is O(sqrt(n)).

//8:
for (int i=n; i>1; i=i/2)
{
    printf("%d", i);
}
//Total frequency count = 3(log2(n)) + 2 (1 for i=n, log2(n)+1 for i>1, log2(n) for i=i/2 and log2(n) for printf) So, the time complexity is O(log n).

//9:
for (int i=1; i<=n; i=i*3)
{
    printf("%d", i);
}
//Total frequency count = 3(log3(n)) + 2 (1 for i=1, log3(n)+1 for i<=n, log3(n) for i=i*3 and log3(n) for printf) So, the time complexity is O(log n).

//10:
for (int i=1; i<n; i=i*2)
{
    for (int j=1; j<n; j=j*2)
    {
        printf("*");
    }
}
//Total frequency count = 3(log2(n)) + 2(log2(n)) + 4 (1 for i=1, log2(n)+1 for i<n, log2(n) for i=i*2, 1 for j=1, log2(n)+1 for j<n, log2(n) for j=j*2 and log2(n) for printf) So, the time complexity is O(log n * log n) = O((log n)^2).