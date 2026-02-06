#include<stdio.h>
#include<stdlib.h>

int partiziona(int v[], int da, int a){

    int p,i,j,temp;
    p=v[0];i=da;j=a;
    while (i<=j)
    {
        if (v[i]<=p) i++;
        else if (v[j]>=p) j--;
        else{
            temp=v[i]; v[i]=v[j]; v[j]=temp;
        }
    }
    v[0]=v[j]; v[j]=p;
    return j;
}

void quick(int v[], int da, int a){
    int pi;
    if (da<a)
    {
        pi = partiziona(v,da,a);
        quick(v,da,pi-1);
        quick(v,pi+1,a);
    }
    

}

void main(){
    int v[100];
    int x, n=0, i;
    printf("Inserire array (0 termina):\n");
    scanf("%d", &x);
    while (x!=0)
    {
       v[n++] = x;
       scanf("%d", &x);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}