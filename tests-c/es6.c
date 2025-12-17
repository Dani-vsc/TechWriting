#include <stdio.h>
#include <stdlib.h>

int  main(){

    int year;
    printf("Inserire un anno:\n");
    scanf("%d", &year);
    if (year%4==0 && year%100!=0 || year%400==0){
        printf("L'anno %d è bisestile\n", year);
    } else {
        printf("L'anno %d non è bisestile\n", year);
    }

}