#include <stdio.h>
#include <string.h>
char cadenaUno[100], cadenaDos[100];
int i, anagrama = true, asciiUno[256] = {0}, asciiDos[256] = {0}; // asciiUno['caracter']={cant q aparece}. 256=cant de caracts ASCII (255)

int main() {
    printf("Ingrese la primera cadena: ");
    scanf("%s",&cadenaUno);
    printf("\nIngresa la segunda cadena: ");
    scanf("%s",&cadenaDos);

    for(i=0 ; i < strlen(cadenaUno); i++) { // actualiza asciiUno
        asciiUno[(int)cadenaUno[i]]++; // (int)yloqsigue, forma de pasar a int un caracter por su i
    }
    for(i=0 ; i < strlen(cadenaDos); i++) { // actualiza asciiDos
        asciiDos[(int)cadenaDos[i]]++;
    }
    
    for (i = 0; i < 256; i++) { // cheq sus arrays que reservan su cant y cuales caracteres tiene las cadenas
        if(asciiUno[i] != asciiDos[i]){
            anagrama = false;
        }
    }

    if(anagrama == true) {
        printf("\nLas cadenas ingresadas son anagramas");
    }
	else{
        printf("\nLas cadenas ingresadas no son anagramas");
    }
}

/*asciiUno: hhah => 'h'=3 y 'a'=1*/
