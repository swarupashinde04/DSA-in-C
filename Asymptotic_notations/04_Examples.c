// Examples of Big O, Big Omega, and Big Theta notations

//1:
int x=arr[5];
//Big O notation: O(1)
//Big Omega notation: Ω(1)
//Big Theta notation: Θ(1)

//2:
for(int i=0; i<n; i++)
{
    printf("%d", i);
}
//Big O notation: O(n)
//Big Omega notation: Ω(n)
//Big Theta notation: Θ(n)

//3:
for(int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
        printf("%d", i);
    }
}
//Big O notation: O(n^2)
//Big Omega notation: Ω(n^2)
//Big Theta notation: Θ(n^2)

//4:
for(int i=0; i<100; i++)
{
}
//Big O notation: O(1)
//Big Omega notation: Ω(1)
//Big Theta notation: Θ(1)