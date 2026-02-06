#include<stdio.h>
#include<stdlib.h>

void  main(){

    int v[100], i, j, x, n =0, temp;

    printf("Inserire numeri interi per popolare array per seleect sort (0 per terminare):\n");
    scanf("%d", &x);
    while (x!=0)
    {
        v[n++]=x;
        scanf("%d", &x);
    }
    
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (v[i]>v[j])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    
}