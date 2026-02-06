#include<stdio.h>
#include<stdlib.h>

void main(){
    
    int s=0, s2=0, n=0, x, Max, min;
    float a, m2, var;
    int v[100], mo, i, j, count, maxc=0;
    printf("Inserire numeri di cui si vuole media, max, min, varianza e moda:\n");
    scanf("%d", &x);
    min=Max=x;
    while(x!=0){
        v[n++]=x;
        s2+=x*x; s+=x;
        if(x>Max){
            Max=x;
        }
        else if(x<min){
            min=x;
        }
        scanf("%d", &x);
    }
    a=s/(float)n;
    m2=s2/(float)n;
    var=m2 - a*a;
    
    for(i=0; i<n; i++){
        count=0;
        for(j=0; j<n; j++){
            if(v[i]==v[j]){
                count++;
            }
        }
        if(count>maxc){
            maxc=count; mo=v[i];
        }
    }
    printf("\nMEDIA: %f;\nMAX: %d;\nMIN: %d;\nVAR: %f;\nMODA: %d, con frequenza %d", a, Max, min, var, mo, maxc);
}