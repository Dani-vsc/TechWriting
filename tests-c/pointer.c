#include<stdio.h>
#include<stdlib.h>

void main(){

    typedef int* punt;
    punt p1;
    char* p2;
    int x;

    p1=&x;
    printf("p occupa %d byte, p2 occupa %d byte", sizeof(p1), sizeof(p2));

    *p1=x;
}