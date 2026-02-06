#include<stdio.h>
#include<stdlib.h>


int fiboRic(int n){
    if(n<=1)
        return 1;
    return fiboRic(n-1)+fiboRic(n-2);
}

int fiboTail(int n, int a, int b){
    printf("FiboTail(%d,%d,%d)\n", n, a, b);
    if (n==0)
    {
       return a;
    }
    
return fiboTail(n-1,b,a+b);
}

void main(){

    int x;
    scanf("%d", &x);
    printf("FiboTail(%d)=%d\n", x, fiboTail(x,1,1));

}