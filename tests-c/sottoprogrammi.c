#include<stdio.h>
#include<stdlib.h>

typedef char str[100];

int somma(int a, int b){

    int sum = a + b;

    return sum;

}

void stampa(str c){
    printf("%s", c);
}

void leggi(int a){
    scanf("%d", &a);
}

void main(){

    int a, b;

    printf("Inserire due interi per sommarli:\n");
    leggi(a);
    leggi(b);

    stampa("somma: %d");
}