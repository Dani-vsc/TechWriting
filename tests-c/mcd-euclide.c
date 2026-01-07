#include <stdio.h>
#include <stdlib.h>

void main(){

    int a, b, r, MCD=0;
    printf("Inserire due valori per cui si vuole calcolare MCD.\n");
    printf("Inserire a\n");
    scanf("%d", &a);
    printf("\nInserire b:\n");
    scanf("%d", &b);

    r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    printf("L'MCD è %d", b);
}