#include <stdio.h>

void Hanoi(int n, char da, char a, char c)
{

    if (n == 1)
    {
        printf("\n%c -> %c", da, a);
    }
    else
    {
        Hanoi(n - 1, da, c, a);
        Hanoi(1, da, a, c);
        Hanoi(n - 1, c, a, da);
    }
}

void main()
{
    int nDischi;

    printf("Numero dischi: ");
    scanf("%d", &nDischi);

    Hanoi(nDischi, 'A', 'B', 'C');
}