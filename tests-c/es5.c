#include <stdio.h>
#include <stdlib.h>

int main() {
    int peso;
    int altezza;
    printf("CALCOLO IMC\n");
    printf("Inserisci il peso (kg): ");
    scanf("%d", &peso);
    printf("Inserisci l'altezza (cm): ");
    scanf("%d", &altezza);
    float altezza_m = altezza / 100.0;
    float imc = peso / (altezza_m * altezza_m);
    printf("Il tuo IMC è: %.2f\n", imc);
    if (imc < 0) {
        printf("Valore IMC impossibile\n");
    }else if (imc >= 0 && imc < 6.7) {
        printf("IMC più basso del minore mai raggiunto\n");
    }
    else if (imc >= 6.7 && imc < 16.1) {
        printf("Grave magrezza\n");
    }
    else if (imc >= 16.1 && imc < 17.5) {
        printf("Sottopeso\n");
    } 
    else if (imc >= 17.5 && imc < 18.5) {
        printf("Leggermente sottopeso\n");
    }
    else if (imc >= 18.5 && imc < 24.9) {
        printf("Normopeso\n");
    }
    else if (imc >= 25 && imc < 29.9) {
        printf("Sovrappeso\n");
    }
    else if (imc >= 30 && imc < 34.9) {
        printf("Obesità di I grado (moderata)\n");
    }
    else if (imc >= 35 && imc < 39.9) {
        printf("Obesità di II grado (grave)\n");
    }
    else if (imc >= 40 && imc < 50) {
        printf("Obesità di III grado (gravissima)\n");
    }
    else if (imc >= 50 && imc < 60) {
        printf("Super obesità\n");
    }
    else if (imc >= 60 && imc < 70) {
        printf("Super super obesità\n");
    }
    else if (imc >= 70 && imc < 185.5) {
        printf("Obesità oltre i limiti umani\n");
    }
    else {
        printf("IMC oltre l'IMC più alto mai registrato\n");
    }
}