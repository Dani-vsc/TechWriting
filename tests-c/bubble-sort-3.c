#include<stdio.h>
#include<stdlib.h>

void main(){

    //typedef enum{FALSE,TRUE} bool;
    int v[140], i=0, j, x, n=0, k, temp, p, gps, count=0;
    //bool S=TRUE;

    printf("Inserire array per bubble sort(0 per terminare):\n");
    scanf("%d", &x);
    while (x!=0)
    {
        v[n++] = x;
        scanf("%d", &x);
    }

    p=n-1;
    gps=p;
    while (p!=-1)
    {
        p=-1;
        //S=FALSE;
        for (j = 0; j < gps; j++)
        {
            count++;
            if (v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                p=j;
                //S=TRUE;
          }
            
        }
        gps=p;
        i++;
    }

    printf("Array finale:\n");
    for (k = 0; k < n; k++)
    {
        printf("%d ", v[k]);
    }
    printf("\nho eseguito %d confronti.", count);
}