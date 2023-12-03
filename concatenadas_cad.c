#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 80

int main (void){
	int cont=0, i, longitud;
	char cadena1[TAM], cadena2[TAM], *cadena3;
	
	printf("Ingresa un texto: "); gets(cadena1);
	printf("Ingresa otro texto: "); gets(cadena2);
	longitud=strlen(cadena1)+ strlen(cadena2);
	cadena3=(char *) malloc( (longitud+1) *sizeof(char));
	
	for(i=0;cadena1[i]!= '\0';i++){
		cadena3[cont]= cadena1[i];
		cont++;
	}
		for(i=0;cadena2[i]!= '\0';i++){
		cadena3[cont]= cadena2[i];
		cont++;
	}
	cadena3[cont]='\0';
	printf("Cadena concatenadas: %s \n", cadena3);
	free(cadena3);
	
	return 0;
}
