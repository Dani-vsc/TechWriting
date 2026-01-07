#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, x, flag=0;
    printf("Inserire un numero per verificare se è primo:\n");
    scanf("%d", &num);
    for ( x = 2; x < num && !flag; x++)
    {
        if(num%x==0){
            flag=1;
        }
    }
    printf(flag?"\n%d è un numero primo.", num:"\n%d non è un numero primo.", num);
    
    

}