#include<stdio.h>
#include<stdlib.h>

void  main(){
    typedef enum{FALSE,TRUE} bool;
    int v[100], i=0, j, x, n=0, k, temp, count=0;
    bool S=TRUE;

    printf("Inserire array per bubble sort(0 per terminare):\n");
    scanf("%d", &x);
    while (x!=0)
    {
        v[n++] = x;
        scanf("%d", &x);
    }
    
    for (i = 0; S && i < n-1; i++)
    {
        S=FALSE;
        for (j = 0; j < n-1; j++)
        {
            count++;
            if (v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                S=TRUE;
            }
            
        }
        
    }
    
    printf("Array finale:\n");
    for (k = 0; k < n; k++)
    {
        printf("%d ", v[k]);
    }
    printf("\nho eseguito %d confronti.", count);
}