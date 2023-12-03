#include<stdio.h>

main(){
	int i;
	char linea[80];
	printf("Ingresa varias palabras: \n");
	gets(linea);
	i=0;
	while(linea[i]!='\0'){
		i++;
	}
	printf("\nEl tamanio de la cadena es: %d", i);
	return 0;
}
