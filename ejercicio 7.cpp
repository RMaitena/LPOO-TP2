#include <stdio.h>
#include <string.h>
char palabras[5][50], palabraMLarga[50];
int longMLarga = 0; // almacenaria la cant de la word mas larga

int main() {
    printf("\nIngresa 5 palabras: ");
    for (int i = 0; i < 5; i++) { // para scanear c/una de c/word
        scanf("%s", palabras[i]);
    }

    for (int i = 0; i < 5; i++) { // bucle consigna
        int longActual = strlen(palabras[i]);
        if (longActual > longMLarga) {
            longMLarga = longActual;
            strcpy(palabraMLarga, palabras[i]); // strcpy, copy y pegue una cadena en otra
        }
    }

    printf("\nLa palabra mas larga que ingresaste es: %s", palabraMLarga);
}

