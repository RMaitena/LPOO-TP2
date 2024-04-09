#include <stdio.h>
#include <string.h>
char cadena[100], caracterRemp, caracterNew;
int i;

int main() {
    printf("Ingrese una cadena de caracteres: ");
    scanf("%s",&cadena); // %s lee una cadena

    printf("Ingresa el caracter que deseas reemplazar: ");
    scanf(" %c",&caracterRemp); // %c lee UN solo caracter y esp para que pueda recibir normal un val y no un nl previo

    printf("Ingresa el nuevo caracter: ");
    scanf(" %c",&caracterNew);

    for(i=0 ; i < strlen(cadena) ; i++) {
        if(cadena[i] == caracterRemp){
            cadena[i] = caracterNew;
        }
    }

    printf("\nLa cadena ahora es: %s", cadena);
}

