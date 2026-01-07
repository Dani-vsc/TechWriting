#include <stdio.h>
#include <stdlib.h>

void main(){

    int a, b, i, MCD=0;
    printf("Inserire due valori per cui si vuole calcolare MCD.\n");
    printf("Inserire a\n");
    scanf("%d", &a);
    printf("\nInserire b:\n");
    scanf("%d", &b);


    for (i=a; i>=1 && MCD==0; i--) {
    if (a%i==0 && b%i==0) 
        {
            MCD=i;
            printf("L'MCD è %d", MCD);
        }
}
}