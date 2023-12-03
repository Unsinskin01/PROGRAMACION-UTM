#include<stdio.h>

main(){
	char linea[80];
	printf("Ingresa varias palabras: \n");
	gets(linea);
	
	printf("\n La frase ingresada fue: \n ");
	puts(linea);
	return 0;
}
