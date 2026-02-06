#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

void main(){

    typedef int mat[SIZE][SIZE];
    int i, j, k;
    mat m1,m2,m3;


    printf("Inserire prima matrice:\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            scanf("%d", &m1[i][j]);
        }
        
    }

    printf("Inserire seconda matrice:\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            scanf("%d", &m2[i][j]);
        }
        
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            m3[i][j]=0;
            for (k = 0; k < SIZE; k++)
            {
                m3[i][j]+=m1[k][j]*m2[i][k];
            }
            
        }
        
    }
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    
}