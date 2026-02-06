#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100

typedef enum {F,M} genere;
    typedef enum {y,n} conferma;
    typedef char str[100];
    typedef struct{
        str nome, cognome;
        int eta;
        genere sesso;
    } persona;

    typedef struct{
        persona v[MAXSIZE];
        int n;
    } agenda;

agenda init(){
    agenda a;
    a.n=0;
    return a;
}

void stampaP(persona p) {
    printf("\n%s %s (%d) %c\n", p.nome, p.cognome, p.eta, p.sesso==M?'M':'F');
}

int confermare(){
    conferma conf;
    printf("Confermare cancellazione utente:\n? (y:%d/n:%d): ", y,n);
    scanf("%d", &conf);
    return conf;
}

persona leggiP() {
    persona p;
    printf("\nnome    : "); scanf("%s", p.nome);
    printf("cognome : "); scanf("%s", p.cognome);
    printf("eta     : "); scanf("%d", &p.eta);
    printf("sesso (F:%d - M:%d): ", F,M); scanf("%d", &p.sesso);
    return p;
}



void stampaA(agenda *a){
    for (int i = 0; i < a->n; i++)
        {
            stampaP(a->v[i]);
            
        }
}

void cerca(agenda *a, str target1){
    int count=0;
    for (int i = 0; i < a->n; i++)
            {
                if(strcmp(target1,a->v[i].nome)==0 || strcmp(target1,a->v[i].cognome)==0){
                    printf("Trovato: ");
                    stampaP(a->v[i]);
                    count++;
                }
            }
            printf("\nSono state trovate %d correlazioni!\n\n", count);
}

void cancella(agenda *a, str target1, str target2){
    int flag=0;
    int conf;
    for (int i = 0; i < a->n;)
            {
                if(strcmp(target1,a->v[i].nome)==0 && strcmp(target2,a->v[i].cognome)==0 && flag==0){
                    conf = confermare();
                    if (conf==0)
                    {
                        printf("\nUtente ");
                        stampaP(a->v[i]);
                        printf("cancellato\n");
                        for (int j = i; j < a->n-1; j++)
                        {
                            a->v[i]=a->v[j+1];
                            a->n--;
                        }
                        flag=1;
                        
                    }
                    else
                        flag=1;

                }
                else
                    i++;
            }
}

void init2(agenda *a){
    //(*a).n=0;
    a->n=0;

}

void main(){

    int i, j, flag=0;
    char buffer[MAXSIZE];

    typedef enum{AGGIUNGI=1,STAMPA,CERCA,CANCELLA,ESCI} azione;

    agenda a; persona p;
    azione scelta; conferma conf;
    a.n=0;
    str target1;
    str target2;
    int count=0;
    a=init();
    init2(&a);

    do
    {
        do
        {
            printf("Inserire carattere accettato tra i seguenti: \n");
            printf("-----\n%d)AGGIUNGI\n%d)STAMPA\n%d)CERCA\n%d)CANCELLA\n%d)ESCI\n", AGGIUNGI,STAMPA,CERCA,CANCELLA,ESCI);
            scanf("%s", buffer);
            scelta=atoi(buffer);
        }
        while (scelta<1 && scelta>5);

        switch (scelta)
        {
        case AGGIUNGI:
            a.v[a.n++]=leggiP();
            break;
        case STAMPA:
            stampaA(&a);
            break;
        case CERCA:
            printf("Cosa si vuole cercare?\n"); scanf("%s", target1); printf("\n");
            cerca(&a, target1);
            break;
        case CANCELLA:
            printf("Inserire nome e cognome di chi si vuole cancellare:\n");
            printf("nome    :"); scanf("%s", target1);
            printf("cognome :"); scanf("%s", target2); printf("\n");
            cancella(&a, target1, target2);
            break;
        case ESCI:
            break;
        }
    } while (scelta!=ESCI);
    

}