#include<stdio.h>
#include<stdlib.h>

void main(){

    int n=-1, a=1, b=1, s;
    
    do
    {
        printf("Inserire un numero:\n");
        scanf("%d", &n);
    } while (n<0);
    
    if (n==0)
    {
       a = 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        s = a + b;
        a = b;
        b = s;
    }
    
    printf("Nella successione di fibonacci il numero in posizione %d è %d", n, a);


}