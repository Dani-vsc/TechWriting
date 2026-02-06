#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(){

    int LISTA[SIZE];
    int x, n=0, i, tmp;

    printf("Inserire lista numeri da inverire e terminare con 0:\n");
    scanf("%d ", &x);
    
    while(x!=0){
        
        LISTA[n++]=x;
        scanf("%d", &x);
        
    }
    
    for(i=0; i<n/2; i++){
        tmp=LISTA[i];
        LISTA[i]=LISTA[n-1-i];
        LISTA[n-1-i]=tmp;

    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", LISTA[i]);
    }    
}