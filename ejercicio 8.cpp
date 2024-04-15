#include <stdio.h>
#include <string.h>
char oracion[150], opc;
int i, eleccion=1;

int main() {
	printf("\nIngrese una oracion: ");
	fgets(oracion, sizeof(oracion), stdin); //no funca -> scanf("%s",&oracion[i]);
	printf("\nOpciones disponibles:");
    printf("\na. Mostrar la oracion toda en mayuscula");
    printf("\nb. Mostrar la oracion toda en minusculas");
    printf("\nc. Mostrar la oracion alternando mayusculas y minusculas");
    printf("\nd. Mostrar la oracion comenzando todas las palabras con mayuscula");

    do{
    	printf("\nSelecciona una opcion (a, b, c, d): ");
		scanf(" %c",&opc);
		switch(opc){
			case 'a':
				printf("\n");
				for(int i = 0; oracion[i] != '\0'; i++){
					if(oracion[i] >= 'a' && oracion[i] <= 'z'){
                        printf("%c", oracion[i] - 32);
                    } 
					else{
                        printf("%c", oracion[i]);
                    }
				}
				break;
			
			case 'b':
				printf("\n");
				for(int i = 0; oracion[i] != '\0'; i++){
					if(oracion[i] >= 'A' && oracion[i] <= 'Z'){
                        printf("%c", oracion[i] + 32);
                    } 
					else{
					    printf("%c", oracion[i]);
                    }
                }
				break;
				
			case 'c':
				printf("\n");
				for(int i = 0; oracion[i] != '\0'; i++){
					if(i % 2 == 0){
                        printf("%c", oracion[i] >= 'a' && oracion[i] <= 'z' ? oracion[i] - 32 : oracion[i]);
                    }
					else{
                        printf("%c", oracion[i] >= 'A' && oracion[i] <= 'Z' ? oracion[i] + 32 : oracion[i]);
                    }
                }
				break;
				
			case 'd':
				printf("\n");
				if(oracion[0] >= 'a' && oracion[0] <= 'z'){
                    printf("%c", oracion[0] - 32);
				}
				else{
                    printf("%c", oracion[0]);
                }
				for(int i = 1; oracion[i] != '\0'; i++){
					if(oracion[i - 1] == ' '){
						if(oracion[i] >= 'a' && oracion[i] <= 'z'){
						    printf("%c", oracion[i] - 32);
                        }
						else{
                            printf("%c", oracion[i]);
                        }
                        }
						else{
                            printf("%c", oracion[i]);
                        }
                }
				break;
				default:
					printf("\nERROR\n");
					break;
		}
		printf("\nSi deseas elegir otra opcion, ingresa (1), caso contrario (0): ");
		scanf("%d",&eleccion);
	}
	while(eleccion!=0);
}
