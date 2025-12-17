#include <stdio.h>
#include <stdlib.h>
int main() {
    int age;
    printf("Inserire età:\n");
    scanf("%d", &age);
    if (age>=1000000000)
    {
        printf("Sei un'entità ultraterrena o un dio onnipotente\n");
    }
    else if (age>=1000000 && age<1000000000)
    {
        printf("Sei immortale o un'entità ultraterrena\n");
    }
    else if (age>=10000 && age<1000000)
    {
        printf("Sei un'entità cosmica o un dio supremo\n");
    }
    else if (age>=2000 && age<10000)
    {
        printf("Sei un viaggiatore del tempo o un'entità aliena\n");
    }
    else if (age>=1000 && age<2000)
    {
        printf("Sei un essere eterno o un'entità divina\n");
    }
    else if (age>=500 && age<1000)
    {
        printf("Sei immortale o un'entità ultraterrena\n");
    }
    else if (age>=400 && age<500)
    {
        printf("Sei un'entità cosmica o un essere onnipotente\n");
    }
    else if (age>=300 && age<400)
    {
        printf("Sei un essere immortale o un dio\n");
    }
    else if (age>=200 && age<300)
    {
        printf("Sei un antico dio o un essere ultraterreno\n");
    }
    else if (age>=150 && age<200)
    {
        printf("Sei un vampiro o un immortale\n");
    }
    else if (age>=130 && age<150)
    {
        printf("Impossibile vivere così tanto\n");
    }
    else if (age>=120 && age<130)
    {
        printf("Anziano quasi morto\n");
    }
    else if (age>=100 && age<120)
    {
        printf("Estremamente anziano\n");
    }
    else if (age>=90 && age<100)
    {
        printf("Anziano molto avanzato\n");
    }
    else if (age>=70&& age<90)
    {
        printf("Anziano avanzato\n");
    }
    else if(age>=50 && age<70)
    {
        printf("Anziano\n");
    }
    else if (age>=40 && age<50)
    {
        printf("Mezza età\n");
    }
    else if (age >= 22 && age < 40) {
        printf("Adulto\n");
    } else if (age >= 14   && age < 22) {
        printf("Ragazzo\n");
    } else if(age >= 2 && age < 14) {
        printf("Bambino\n");
    }
    else if(age >= 0 && age < 2) {
        printf("Neonato\n");
    }
    else if (age < 0) {
        printf("Età non valida\n");
    }
    else {
        printf("Errore di input\n");
    }
}