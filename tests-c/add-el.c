#include<stdio.h>
#include<stdlib.h>


void main(){


    int v[100], n=0, i, j, x, a;

    printf("Inserire numeri interi per popolare array (0 per terminare):\n");
    scanf("%d", &x);
    while (x!=0)
    {
        v[n++]=x;
        scanf("%d", &x);
    }

    printf("\nInserire numero da mettere al posto giusto:\n");
    scanf("%d", &a);

    i=0;
    while (i<n && v[i]<a)
        i++;
    
    for (j = n-1; j >= i; j--)
        {
            v[j+1] = v[j];
        }
    v[i]=a;
    n++;


    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}