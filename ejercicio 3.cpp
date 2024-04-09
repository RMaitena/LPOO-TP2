#include <stdio.h>
#include <string.h>
char cadena[100];
int i, palindromo = true, longitud;

int main() {
    printf("Ingrese una palabra y te dire si es palindroma o no: ");
    scanf("%s",&cadena);

    longitud = strlen(cadena);
    for(i=0 ; i < longitud / 2; i++){
        if(cadena[i] != cadena[longitud - i - 1]){
            palindromo = false;
        }
    }
    
    if(palindromo == true){
        printf("\nLa palabra ingresada es palindroma");
    }
	else{
        printf("\nLa palabra ingresada no es palindroma");
    }
}

/*Se repite varias veces el printf¡!
    for (i=0 ; i < longitud / 2; i++) {
        if (cadena[i] != cadena[longitud - i - 1]) {
            printf("\nLa palabra ingresada no es palindroma");
        }
        else{
        	printf("\nLa cadena ingresada es un palindroma");
		}
    }*/
