#include <stdio.h>
#include <string.h>
char cadena[100];
int i, vocales = 0;

int main() {
    printf("Ingrese una cadena de caracteres: ");
    scanf("%s",&cadena[i]);

    for(i=0 ; i<strlen(cadena) ; i++){ //strlen, cant de caracteres q tiene la cadena
        char caracter = cadena[i];

        if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'){
            vocales++; //vocales = vocales + 1;
        }
    }

    printf("\nLa cadena ingresada tiene %d vocal o vocales", vocales);
}

